#include "../object.hpp"
#pragma once

/**
 * \brief This class stores the digits that appear on screen for total gold count
 */
class CoinDigits : public Object
{
private:
    SDL_Rect digitRects[10];
    int num_1;
    int num_2;
    int num_3;
    int coinCounter;

public:
    /**
     * Simple constructor, doens't initialize anything
     */
    CoinDigits();
    
    /**
     * initializes all elements of digitRects as well as num_1, num_2, num_3 and coin counter attributes
     * \param x is the top left x coordinate of the slab
     * \param y is the top left y coordinate of the slab
     */
    CoinDigits(int, int);
    
    /**
     * initializes all elements of digitRects as well as num_1, num_2, num_3 and coin counter attributes
     * \param coin is total number of coins to start with, set as the value for coin counter
     */
    CoinDigits(int coin);

    /**
     * draws coin digits on screen
     */
    void draw(SDL_Renderer *gRenderer, SDL_Texture *assets);
    
    /**
     * updates the coinCounter attribute when called
     */
    void updateCoins();
    
    /**
     * operator overload
     */
    bool operator>(int price);
    
    /**
     * operator overload
     */
    CoinDigits &operator-=(const int price);
    
    /**
     * operator overload
     */
    CoinDigits &operator+=(int gold);
};