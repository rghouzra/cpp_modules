//
// Created by reda ghouzraf on Sat Feb  3 17:56:36 2024
//
#ifndef ScalarConverter_HPP
#define ScalarConverter_HPP

#include <iostream>
#include <climits>

#define STRING_EQUALS(str, arr) (str.compare(arr) == 0)

#define IS_SPECIAL_FLOAT_STRING(str) \
    ( \
        STRING_EQUALS(str, "-inff") || \
        STRING_EQUALS(str, "+inff")\
    )

#define IS_SPECIAL_DOUBLE_STRING(str) \
    ( \
        STRING_EQUALS(str, "-inf") || \
        STRING_EQUALS(str, "+inf") || \
        STRING_EQUALS(str, "nan") \
    )

enum t_type
{
    CHARACTER,
    INTEGER,
    FLOAT_NUMBER,
    DOUBLE_NUMBER,
    UNKNOWN
};

typedef union s_formats{
    char char_format;
    int int_format;
    float float_format;
    double double_format;
}t_formats;

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
