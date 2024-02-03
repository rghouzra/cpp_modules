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
    
}

Intern::Intern(const Intern& obj)
{
    if (this != &obj)
        *this = obj;
}

Intern& Intern::operator=(const Intern& obj)
{   if (this != &obj)
    {
        // this->attributes = obj.attributes;
        // ...
    }
    return (*this);
}


AForm *Intern::makeForm(const std::string &FormName, const std::string &target){
    return nullptr;
}