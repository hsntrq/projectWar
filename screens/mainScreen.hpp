#include "screen.hpp"

class MainScreen : public Screen
{
public:
    MainScreen();
    void drawObjects();
    void detectClick(int, int);
};