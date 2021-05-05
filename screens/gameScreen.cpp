#include "gameScreen.hpp"

int GameScreen::drawObjects() //iterating through the lists and drawing all of the instances
{
    elapsedFrames++;
    pause.draw(gRenderer, assets);
    base.draw(gRenderer, assets);
    if (baseHP == 0)
    {
        state = 4;
    }
    if (paused)
    {
        paused = false;
        pause.reset();
        return 6;
    }
    if (!waves.empty())
    {
        if (!waves.front()->enemiesSpawned())
        {
            waves.front()->spawnEnemies(enemies, elapsedFrames);
        }
        if (waves.front()->waveComplete(elapsedFrames) && enemies.empty())
        {
            delete waves.front();
            waves.pop_front();
        }
    }
    if (waves.empty() && enemies.empty() && baseHP >= 0)
    {
        state = 3;
        std::cout << "Game Over" << std::endl;
        return state;
    }
    for (list<Tower *>::iterator tower = towers.begin(); tower != towers.end(); ++tower)
    {
        if ((*tower)->towerID < 4)
        {
            auto [enemyX, enemyY] = (*tower)->checkEnemyInRange(enemies);
            if (enemyX && enemyY && (*tower)->cooledDown)
            {
                (*tower)->fireProjectile(enemyX, enemyY, projectiles);
            }
        }
        (*tower)->updateCoolDownStatus(elapsedFrames); // necessary because the tower has to first fire before going into cooldown
        (*tower)->draw(gRenderer, assets);
    }
    for (list<Enemy *>::iterator enemy = enemies.begin(); enemy != enemies.end(); ++enemy)
    {
        if ((*enemy)->followPath())
        {
            base.decreaseHealth(baseDamage);
            delete (*enemy);
            enemies.erase(enemy--);
            baseDamage = 0;
        }
        else
        {
            (*enemy)->draw(gRenderer, assets);
        }
    }
    for (int i = 0; i < towerCards.size(); i++)
    {
        towerCards[i].draw(gRenderer, assets);
    }
    for (list<Projectile *>::iterator projectile = projectiles.begin(); projectile != projectiles.end(); ++projectile)
    {
        (*projectile)->shoot();
        (*projectile)->handleCollision(enemies);
        (*projectile)->draw(gRenderer, assets);
        if ((*projectile)->reachedTarget)
        {
            delete (*projectile);
            projectiles.erase(projectile--);
        }
    }
    coins.updateCoins();
    slab.draw(gRenderer, assets);
    coins.draw(gRenderer, assets);
    return state;
}

void GameScreen::detectClick(int x, int y)
{
    std::cout << "Mouse clicked at: " << x << " -- " << y << std::endl;
    if (pause.pressed(x, y))
    {
        paused = true;
    }
    if (cardClicked)
    {
        for (list<TowerBuilder *>::iterator patch = patches.begin(); patch != patches.end(); ++patch)
        {
            (*patch)->isClicked(towers, towerSelected, x, y, coins);
        }
        cardClicked = false;
        towerCards[towerSelected].isSelected = false;
        towerSelected = -1;
    }
    else
    {
        for (int i = 0; i < towerCards.size(); i++)
        {
            if (towerCards[i].isClicked(x, y))
            {
                cardClicked = true;
                towerSelected = i;
                towerCards[towerSelected].isSelected = true;
                break;
            }
        }
    }
}

GameScreen::GameScreen(SDL_Renderer *renderer, SDL_Texture *asst)
{
    baseHP = 100;
    gRenderer = renderer;
    assets = asst;
    elapsedFrames = 0;
    state = 2;
    baseDamage = 0;

    coins = CoinDigits(427, 689);

    patches.push_back(new TowerBuilder(288, 416));
    patches.push_back(new TowerBuilder(288, 256));
    patches.push_back(new TowerBuilder(32, 64));
    patches.push_back(new TowerBuilder(672, 160));
    patches.push_back(new TowerBuilder(480, 352));
    patches.push_back(new TowerBuilder(544, 544));
    patches.push_back(new TowerBuilder(768, 320));
    patches.push_back(new TowerBuilder(992, 512));
    patches.push_back(new TowerBuilder(1152, 416));
    patches.push_back(new TowerBuilder(960, 224));
    patches.push_back(new TowerBuilder(64, 480));

    towerCards.push_back(FireCard());
    towerCards.push_back(BombCard());
    towerCards.push_back(IceCard());
    towerCards.push_back(LongBowCard());
    towerCards.push_back(GoldCard());
    towerCards.push_back(RepairCard());

    cardClicked = false;
    towerSelected = -1;

    for (int i = 0; i < 5; i++) //fills up a list that stores 6 consecutive waves
    {
        waves.push_back(new EnemyFactory(i));
    }
    pause = Button({853, 283, 88, 31}, {853, 346, 88, 29}, {396, 643, 88, 31}, {396, 649, 88, 29});
}

GameScreen::~GameScreen() //destructor deletes all dynamically created objects traversing them in all the lists
{
    for (auto tower : towers)
    {
        delete tower;
    }
    for (auto projectile : projectiles)
    {
        delete projectile;
    }
    for (auto patch : patches)
    {
        delete patch;
    }
    for (auto enemy : enemies)
    {
        delete enemy;
    }
    for (auto wave : waves)
    {
        delete wave;
    }
}