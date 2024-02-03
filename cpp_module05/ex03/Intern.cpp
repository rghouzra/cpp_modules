//
// Created by reda ghouzraf on Sat Feb  3 12:04:10 2024
//
#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern : Default Constructor Called" << std::endl;
}

Intern::~Intern()
{
    std::cout << "Intern : Destructor Called" << std::endl;
}

Intern::Intern(const Intern& obj)
{
    std::cout << "Copy Constructor Called" << std::endl;
    if (this != &obj)
        *this = obj;
}

Intern& Intern::operator=(const Intern& obj)
{
    std::cout << "Copy Assignment Operator Called" << std::endl;
    if (this != &obj)
    {
        // this->attributes = obj.attributes;
        // ...
    }
    return (*this);
}
