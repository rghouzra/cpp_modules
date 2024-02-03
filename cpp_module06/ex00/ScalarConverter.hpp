//
// Created by reda ghouzraf on Sat Feb  3 17:56:36 2024
//
#ifndef ScalarConverter_HPP
#define ScalarConverter_HPP

#include <iostream>


class ScalarConverter
{
public:
    ScalarConverter();
    ScalarConverter(const ScalarConverter& obj);
    ~ScalarConverter();
    ScalarConverter& operator=(const ScalarConverter& obj);
    static void convert(const std::string &string); 
private:
};
#endif /*ScalarConverter_HPP*/
