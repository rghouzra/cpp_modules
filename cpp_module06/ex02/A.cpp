//
// Created by reda ghouzraf on Thu Feb 29 14:12:56 2024
//
#include "A.hpp"

A::A()
{
 //  std::cout << "A : Default Constructor Called" << std::endl;
}

A::~A()
{
  //  std::cout << "A : Destructor Called" << std::endl;
}

A::A(const A& obj)
{
  //  std::cout << "Copy Constructor Called" << std::endl;
    if (this != &obj)
        *this = obj;
}

A& A::operator=(const A& obj)
{
  //  std::cout << "Copy Assignment Operator Called" << std::endl;
    if (this != &obj)
    {
        // this->attributes = obj.attributes;
        // ...
    }
    return (*this);
}
