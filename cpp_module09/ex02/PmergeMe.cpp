//
// Created by reda on Thu Mar  7 15:02:02 2024
//
#include "PmergeMe.hpp"


/*
    * store elements in a list
*/
PmergeMe::PmergeMe(char **av)
{
    int i = 0;
    while (av[i])
    {
        int number;
        number = atoi(av[i]);
        lis.push_back(number);
        i++;
    }
}

PmergeMe::~PmergeMe()
{

}
