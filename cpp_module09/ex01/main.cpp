//
// Created by reda ghouzraf on Wed Mar  6 20:02:39 2024
//
#include "RPN.hpp"

int main(int ac, char **av)
{
    if(ac != 2)
        return 1;
    try{
        RPN obj(av[1]);
    }
    catch(std::exception &e){
        std::cerr << e.what();
    }
    return 0;
}
