#include <iostream>
#include <tuple>
class Patches{
    private:
        int x,y;
    public:
        bool isAvailable;
        Patches(int, int);
        bool checkRange(int, int);
        std::tuple<int, int> location();
};