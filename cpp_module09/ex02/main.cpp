//
// Created by reda on Thu Mar  7 15:02:02 2024
//
#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    try
    {
        ac--;
        av++;
        if(ac < 2){
            throw std::runtime_error("Wrong number of args");
        }
        PmergeMe obj(av);
        obj.FordJohnsonAlgorithm();

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}
