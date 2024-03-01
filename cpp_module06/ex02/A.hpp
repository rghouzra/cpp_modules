//
// Created by reda ghouzraf on Thu Feb 29 14:12:56 2024
//
#ifndef A_HPP
#define A_HPP
#include "Base.hpp"
#include <iostream>


class A : public Base
{
public:
    A();
    A(const A& obj);
    ~A();
    A& operator=(const A& obj);

private:
};
#endif /*A_HPP*/
