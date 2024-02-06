//
// Created by reda ghouzraf on Sat Feb  3 17:56:36 2024
//
#ifndef ScalarConverter_HPP
#define ScalarConverter_HPP

#include <iostream>

#define STRING_EQUALS(str, arr) (str.compare(arr) == 0)

#define IS_SPECIAL_FLOAT_STRING(str) \
    ( \
        STRING_EQUALS(str, "-inf") || \
        STRING_EQUALS(str, "+inf") || \
        STRING_EQUALS(str, "-inff") || \
        STRING_EQUALS(str, "+inff") || \
        STRING_EQUALS(str, "nan") \
    )

class ScalarConverter
{
public:
    ~ScalarConverter();
    ScalarConverter& operator=(const ScalarConverter& obj);
    static void convert(const std::string &string); 
private:
    ScalarConverter();
    ScalarConverter(const ScalarConverter& obj);
};
#endif /*ScalarConverter_HPP*/
