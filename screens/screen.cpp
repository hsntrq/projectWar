#include "screen.hpp"

Screen::Screen() : gRenderer(NULL), assets(NULL) {}

Screen::Screen(SDL_Renderer *R, SDL_Texture *A) : gRenderer(R), assets(A) {}
