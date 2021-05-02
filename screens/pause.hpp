#include "screen.hpp"

class Pause : public Screen
{
public:
    Pause();
    void drawObjects();
    void detectClick(int, int);
};