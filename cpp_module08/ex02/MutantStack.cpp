//
// Created by reda ghouzraf on Sun Mar  3 18:01:46 2024
//
#include "MutantStack.hpp"

MutantStack::MutantStack()
{
    std::cout << "MutantStack : Default Constructor Called" << std::endl;
}

MutantStack::~MutantStack()
{
    std::cout << "MutantStack : Destructor Called" << std::endl;
}

MutantStack::MutantStack(const MutantStack& obj)
{
    std::cout << "Copy Constructor Called" << std::endl;
    if (this != &obj)
        *this = obj;
}

MutantStack& MutantStack::operator=(const MutantStack& obj)
{
    std::cout << "Copy Assignment Operator Called" << std::endl;
    if (this != &obj)
    {
        // this->attributes = obj.attributes;
        // ...
    }
    return (*this);
}
