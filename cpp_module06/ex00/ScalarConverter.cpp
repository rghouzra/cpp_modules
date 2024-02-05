//
// Created by reda ghouzraf on Sat Feb  3 17:56:36 2024
//
#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
   
}

ScalarConverter::~ScalarConverter()
{
  
}

ScalarConverter::ScalarConverter(const ScalarConverter& obj)
{
  
    if (this != &obj)
        *this = obj;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& obj)
{
  
    if (this != &obj)
    {
        // this->attributes = obj.attributes;
        // ...
    }
    return (*this);
}

void char_format(const std::string &string){

}

void ScalarConverter::convert(const std::string &string){
    char_format(string);
}