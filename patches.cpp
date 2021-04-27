#include "patches.hpp"

bool Patches::checkRange(int a, int b){
    return ((a >= x && a <= x + 96) && (b >= y && b <= y + 96));
}

Patches::Patches(int a, int b): x(a),y(b),isAvailable(true){}