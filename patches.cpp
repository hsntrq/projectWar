#include "patches.hpp"

bool Patches::checkRange(int a, int b)
{
    return ((a >= x && a <= x + 96) && (b >= y && b <= y + 96));
}
std::tuple<int, int> Patches::location()
{

    std::cout << x << " " << y << std::endl;
    return std::make_tuple(x, y);
}
Patches::Patches(int a, int b) : x(a), y(b), isAvailable(true) {}

void Patches::isClicked(std::list<Object *> &towers, std::list<Projectile *> &projectiles, int towerSelected, int x_, int y_)
{

    if (isAvailable)
        if (checkRange(x_, y_))
        {
            auto [a, b] = location();
            if (towerSelected == 0)
            {
                towers.push_back(new FireTower(a, b));
                projectiles.push_back(new FireTowerProjectile(a, b));
            }
            else if (towerSelected == 1)
            {
                towers.push_back(new BombTower(a, b));
                projectiles.push_back(new BombTowerProjectile(a, b));
            }
            else if (towerSelected == 2)
            {
                towers.push_back(new GoldTower(a, b));
            }
            else if (towerSelected == 3)
            {
                towers.push_back(new IceTower(a, b));
                projectiles.push_back(new IceTowerProjectile(a, b));
            }
            else if (towerSelected == 4)
            {
                towers.push_back(new LongBowTower(a, b));
                projectiles.push_back(new LongBowTowerProjectile(a, b));
            }
            else if (towerSelected == 5)
            {
                towers.push_back(new RepairTower(a, b));
            }
            isAvailable = false;
        }
}