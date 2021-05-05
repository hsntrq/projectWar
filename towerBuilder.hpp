#include <iostream>
#include <tuple>
#include <list>
#include "object.hpp"
#include "towers/firetower.hpp"
#include "towers/icetower.hpp"
#include "towers/goldtower.hpp"
#include "towers/longbowtower.hpp"
#include "towers/repairtower.hpp"
#include "towers/bombtower.hpp"
#include "goldCoins/coinDigits.hpp"
#pragma once

class TowerBuilder
{
private:
    int x, y;

public:
    bool isAvailable;
    TowerBuilder(int, int);
    bool checkRange(int, int);
    std::tuple<int, int> location();
    void isClicked(std::list<Tower *> &, int, int, int, CoinDigits &);
    Tower *buildFireTower(int a, int b, CoinDigits &coins);
    Tower *buildIceTower(int a, int b, CoinDigits &coins);
    Tower *buildLongBowTower(int a, int b, CoinDigits &coins);
    Tower *buildGoldTower(int a, int b, CoinDigits &coins);
    Tower *buildRepairTower(int a, int b, CoinDigits &coins);
    Tower *buildBombTower(int a, int b, CoinDigits &coins);
};