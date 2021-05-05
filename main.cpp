#include "game.hpp"

int main(int argc, char *argv[])
{
    srand(time(NULL));
    if (!Game::singleton().init())
    {
        printf("Failed to initialize!\n");
        return 0;
    }
    //Load media
    if (!Game::singleton().loadMedia())
    {
        printf("Failed to load media!\n");
        return 0;
    }

    Game::singleton().run();
    Game::singleton().close();

    return 0;
}