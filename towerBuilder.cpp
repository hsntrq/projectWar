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

void TowerBuilder::isClicked(std::list<Tower *> &towers, int towerSelected, int x_, int y_)
{
    if (isAvailable)
        if (checkRange(x_, y_))
        {
            auto [a, b] = location();
            if (towerSelected == 0)
            {
                towers.push_back(buildFireTower(a, b));
            }
            else if (towerSelected == 1)
            {
                towers.push_back(buildBombTower(a, b));
            }
            else if (towerSelected == 2)
            {
                towers.push_back(buildIceTower(a, b));
            }
            else if (towerSelected == 3)
            {
                towers.push_back(buildLongBowTower(a, b));
            }
            else if (towerSelected == 4)
            {
                towers.push_back(buildGoldTower(a, b));
            }
            else if (towerSelected == 5)
            {
                towers.push_back(buildRepairTower(a, b));
            }
            isAvailable = false;
        }
    for (auto tower:towers)
    {
        tower->buildDamage();
        tower->buildRange();
        tower->buildReloadTime();
    }
}

Tower* TowerBuilder::buildFireTower(int a, int b)
{
    return new FireTower(a, b);
}
Tower* TowerBuilder::buildIceTower(int a, int b)
{
    return new IceTower(a, b);
}
Tower* TowerBuilder::buildLongBowTower(int a, int b)
{
    return new LongBowTower(a, b);
}
Tower* TowerBuilder::buildGoldTower(int a, int b)
{
    return new GoldTower(a, b);
}
Tower* TowerBuilder::buildRepairTower(int a, int b)
{
    return new RepairTower(a, b);
}
Tower* TowerBuilder::buildBombTower(int a, int b)
{
    return new BombTower(a, b);
}