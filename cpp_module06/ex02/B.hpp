//
// Created by reda ghouzraf on Thu Feb 29 14:15:59 2024
//
#ifndef B_HPP
#define B_HPP

#include <iostream>
#include "Base.hpp"

class B : public Base
{
public:
    B();
    B(const B& obj);
    ~B();
    B& operator=(const B& obj);

private:
};
#endif /*B_HPP*/
