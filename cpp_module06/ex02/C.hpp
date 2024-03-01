//
// Created by reda ghouzraf on Thu Feb 29 14:16:14 2024
//
#ifndef C_HPP
#define C_HPP

#include <iostream>
#include "Base.hpp"

class C : public Base
{
public:
    C();
    C(const C& obj);
    ~C();
    C& operator=(const C& obj);

private:
};
#endif /*C_HPP*/
