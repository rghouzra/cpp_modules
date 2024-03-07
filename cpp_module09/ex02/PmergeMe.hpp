//
// Created by reda on Thu Mar  7 15:02:02 2024
//
#ifndef PmergeMe_HPP
#define PmergeMe_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <list>


class PmergeMe
{
public:
    PmergeMe(char **av);
    ~PmergeMe();
private:
    std::vector<int>vec;
    std::deque<int> deq;
    std::list<int>  lis;
};
#endif /*PmergeMe_HPP*/
