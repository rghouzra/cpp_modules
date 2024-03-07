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
        if(number < 0)
            throw std::runtime_error("only positive integers");
        deq.push_back(number);
        vec.push_back(number);
        i++;
    }
}

template<typename Cont, typename Pairs>
void generatePairs(const Cont &c, Pairs &pairs){
    size_t size = c.size();
    int struggler = -1;

    size -= (size & 1);
    for (size_t i = 0; i < size; i+=2)
    {
        c.push_back(std::make_pair(c[i], c[i + 1]));
    }
}

void PmergeMe::FordJohnsonAlgorithm(){
    std::vector<std::pair<int, int>> vecpairs;
    std::deque<std::pair<int, int>> deqpairs;
    generatePairs(vec, vecpairs);
    generatePairs(deq, deqpairs);
}

PmergeMe::~PmergeMe()
{

}
