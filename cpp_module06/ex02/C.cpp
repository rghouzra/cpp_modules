//
// Created by reda ghouzraf on Thu Feb 29 14:16:14 2024
//
#include "C.hpp"

C::C()
{
  //  std::cout << "C : Default Constructor Called" << std::endl;
}

C::~C()
{
 //   std::cout << "C : Destructor Called" << std::endl;
}

C::C(const C& obj)
{
 //   std::cout << "Copy Constructor Called" << std::endl;
    if (this != &obj)
        *this = obj;
}

C& C::operator=(const C& obj)
{
  //  std::cout << "Copy Assignment Operator Called" << std::endl;
    if (this != &obj)
    {
        // this->attributes = obj.attributes;
        // ...
    }
    return (*this);
}
