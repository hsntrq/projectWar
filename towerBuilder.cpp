#include "towerBuilder.hpp"

bool TowerBuilder::checkRange(int a, int b)
{
    return ((a >= x && a <= x + 96) && (b >= y && b <= y + 96));
}

std::tuple<int, int> TowerBuilder::location()
{
    return std::make_tuple(x, y);
}

TowerBuilder::TowerBuilder(int a, int b) : x(a), y(b), isAvailable(true) {}

void TowerBuilder::isClicked(std::list<Tower *> &towers, int towerSelected, int x_, int y_, CoinDigits &coins)
{
    if (isAvailable)
        if (checkRange(x_, y_))
        {
            auto [a, b] = location();
            if (towerSelected == 0)
            {
                Tower *t = buildFireTower(a, b, coins);
                if (t)
                    towers.push_back(t);
            }
            else if (towerSelected == 1)
            {
                Tower *t = buildBombTower(a, b, coins);
                if (t)
                    towers.push_back(t);
            }
            else if (towerSelected == 2)
            {
                Tower *t = buildIceTower(a, b, coins);
                if (t)
                    towers.push_back(t);
            }
            else if (towerSelected == 3)
            {
                Tower *t = buildLongBowTower(a, b, coins);
                if (t)
                    towers.push_back(t);
            }
            else if (towerSelected == 4)
            {
                Tower *t = buildGoldTower(a, b, coins);
                if (t)
                    towers.push_back(t);
            }
            else if (towerSelected == 5)
            {
                Tower *t = buildRepairTower(a, b, coins);
                if (t)
                    towers.push_back(t);
            }
            isAvailable = false;
        }
    for (auto tower : towers)
    {
        tower->buildDamage();
        tower->buildRange();
        tower->buildReloadTime();
    }
}

Tower *TowerBuilder::buildFireTower(int a, int b, CoinDigits &coins)
{
    Tower *t = new FireTower(a, b);
    if (coins > t->towerPrice)
    {
        coins -= t->towerPrice;
        return t;
    }
    return NULL;
}
Tower *TowerBuilder::buildIceTower(int a, int b, CoinDigits &coins)
{
    Tower *t = new IceTower(a, b);
    if (coins > t->towerPrice)
    {
        coins -= t->towerPrice;
        return t;
    }
    return NULL;
}

Tower *TowerBuilder::buildLongBowTower(int a, int b, CoinDigits &coins)
{
    Tower *t = new LongBowTower(a, b);
    if (coins > t->towerPrice)
    {
        coins -= t->towerPrice;
        return t;
    }
    return NULL;
}
Tower *TowerBuilder::buildGoldTower(int a, int b, CoinDigits &coins)
{
    Tower *t = new GoldTower(a, b);
    if (coins > t->towerPrice)
    {
        coins -= t->towerPrice;
        return t;
    }
    return NULL;
}
Tower *TowerBuilder::buildRepairTower(int a, int b, CoinDigits &coins)
{
    Tower *t = new RepairTower(a, b);
    if (coins > t->towerPrice)
    {
        coins -= t->towerPrice;
        return t;
    }
    return NULL;
}
Tower *TowerBuilder::buildBombTower(int a, int b, CoinDigits &coins)
{
    Tower *t = new BombTower(a, b);
    if (coins > t->towerPrice)
    {
        coins -= t->towerPrice;
        std::cout << "bomb tower comparison \n";
        return t;
    }
    return NULL;
}