//
// Created by reda ghouzraf on Sat Feb  3 17:56:36 2024
//
#include "ScalarConverter.hpp"

int main(int ac,char **av)
{
    // Your Code
    if(ac == 1) return 1;
    ScalarConverter::convert(av[1]);
    return 0;
}
