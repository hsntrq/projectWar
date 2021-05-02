#include "screen.hpp"

class Options : public Screen
{
public:
    Options();
    void drawObjects();
    void detectClick(int, int);
};