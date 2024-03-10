//
// Created by reda on Thu Mar  7 15:02:02 2024
//
#ifndef PmergeMe_HPP
#define PmergeMe_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/time.h>


class PmergeMe
{
public:
    void FordJohnsonAlgorithm();
    PmergeMe(char **av);
    ~PmergeMe();
private:
    std::vector<int>vec;
    double vec_time_used;
    double deq_time_used;
    std::deque<int> deq;
};

float time_difference(struct timeval start,struct timeval end);
#endif /*PmergeMe_HPP*/
