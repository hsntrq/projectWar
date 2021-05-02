#include "screen.hpp"

class Win: public Screen{
    public:
        Win();
        void drawObjects();
        void detectClick(int, int);
};