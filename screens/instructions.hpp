#include "screen.hpp"

class Instructions : public Screen
{
public:
    Instructions();
    void drawObjects();
    void detectClick(int, int);
};