//
// Created by reda ghouzraf on Sat Mar  2 14:58:30 2024
//
#include "Array.hpp"

Array::Array()
{
    std::cout << "Array : Default Constructor Called" << std::endl;
}

Array::~Array()
{
    std::cout << "Array : Destructor Called" << std::endl;
}

Array::Array(const Array& obj)
{
    std::cout << "Copy Constructor Called" << std::endl;
    if (this != &obj)
        *this = obj;
}

Array& Array::operator=(const Array& obj)
{
    std::cout << "Copy Assignment Operator Called" << std::endl;
    if (this != &obj)
    {
        // this->attributes = obj.attributes;
        // ...
    }
    return (*this);
}
