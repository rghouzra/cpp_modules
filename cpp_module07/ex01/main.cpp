//
// Created by reda ghouzraf on Sat Mar  2 14:27:25 2024
//
#include "iter.hpp"



template<class t>
void func(t x)
{
    std::cout << x.x << '\n';
}
// template<typename t>
// void func(t x)
// {
//     std::cout << x << '\n';
// }


class wall{
    public:
    int x;
    wall(int _x){
        x = _x% 2;
    }
    wall(char _x){
        x = (_x%50)  + 32;
    }
};

int main()
{

    int itab[10] = {0};
    for(int i = 0; i <  10; i++)
        itab[i] = i + static_cast<int>((reinterpret_cast<long>(&itab[i]) % 110));

    char ctab[10] = {0};
    for(int i = 0; i <  10; i++)
        ctab[i] =33 + static_cast<int>((reinterpret_cast<long>( &ctab[i]) % 30));

    iter(itab, 10, func<wall>);

    std::cout << "-----------------------------\n";

    iter(ctab, 10, func<wall>);

    return 0;
}
