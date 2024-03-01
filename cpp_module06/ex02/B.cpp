//
// Created by reda ghouzraf on Thu Feb 29 14:15:59 2024
//
#include "B.hpp"

B::B()
{
    // std::cout << "B : Default Constructor Called" << std::endl;
}

B::~B()
{
    // std::cout << "B : Destructor Called" << std::endl;
}

B::B(const B& obj)
{
    // std::cout << "Copy Constructor Called" << std::endl;
    if (this != &obj)
        *this = obj;
}

B& B::operator=(const B& obj)
{
    // std::cout << "Copy Assignment Operator Called" << std::endl;
    if (this != &obj)
    {
        // this->attributes = obj.attributes;
        // ...
    }
    return (*this);
}
