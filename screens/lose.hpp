#include "screen.hpp"

class Lose: public Screen{
    public:
        Lose();
        void drawObjects();
        void detectClick(int, int);
};