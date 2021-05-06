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

/**
 * \brief This class build towers to place in acceptable coordinates using builder design pattern
 */
class TowerBuilder
{
private:
    int x, y;

public:
    bool isAvailable;
    /**
     * Constructor that sets up values for the attributes
     */
    TowerBuilder(int, int);

    /**
     * checks if user clicked on acceptable space to place tower
     */
    bool checkRange(int, int);

    /**
     * return tower location
     */
    std::tuple<int, int> location();

    /**
     * checks if user has made a click on relevant pixels
     */
    void isClicked(std::list<Tower *> &, int, int, int, CoinDigits &);

    /**
     * builds fire tower
     */
    Tower *buildFireTower(int a, int b, CoinDigits &coins);
    
    /**
     * builds ice tower
     */
    Tower *buildIceTower(int a, int b, CoinDigits &coins);
    
    /**
     * builds longbow tower
     */
    Tower *buildLongBowTower(int a, int b, CoinDigits &coins);
    
    /**
     * builds gold tower
     */
    Tower *buildGoldTower(int a, int b, CoinDigits &coins);
    
    /**
     * builds repair tower
     */
    Tower *buildRepairTower(int a, int b, CoinDigits &coins);
    
    /**
     * builds bomb tower
     */
    Tower *buildBombTower(int a, int b, CoinDigits &coins);
};