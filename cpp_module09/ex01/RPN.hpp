//
// Created by reda ghouzraf on Wed Mar  6 20:02:39 2024
//
#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <sstream>

#define isop(x)(x == '+' || x == '-' || x == '/' || x == '*')

class RPN
{
public:
    RPN(std::string arg);
    ~RPN();
private:
    std::stack<int16_t>stack;
};
#endif /*RPN_HPP*/
