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


void getType(const std::string &str, t_type &type){
    if(str.size()){
        int  Digits = 0, chars = 0, floatpoint = 0, floatspecifiers = 0;
        int floathelper = 0;
        for(size_t i = 0; i < str.size(); i++){
             Digits += (isdigit(str[i]));
             floathelper += (isdigit(str[i]));
             floatpoint += (floathelper > 0 && (floathelper = 0));
             floatspecifiers += (((Digits != 0)  + (floatpoint == 1) + (str[i] == 'f')) == 3);
             chars ++;
        }
        if(chars == 1){
            type = CHARACTER;
        }
        else if(Digits == (int)str.size())
            type = INTEGER;
        else if(floatpoint == 1 && floathelper > 1 ){
            type = (floatspecifiers == 1 ? FLOAT_NUMBER : (floatspecifiers == 0 ? DOUBLE_NUMBER : UNKNOWN));
            if(IS_SPECIAL_DOUBLE_STRING(str))
                type = DOUBLE_NUMBER;
            else if(IS_SPECIAL_FLOAT_STRING(str))
                type = FLOAT_NUMBER;
        }
        else
            type = UNKNOWN;
    }
}


void char_format(char arg)
{
    std::cout << "char format :\t";
    if(isprint(arg))
        std::cout<< "\'" << arg << "\'";
    else
        std::cout<< "impossible";
    std::cout << "\n";
}

void integer_format(int arg){
     std::cout << "integ format :\t";
    std::cout << arg;
    std::cout << "\n";
}
void float_format(float arg){
     std::cout << "float format :\t";
    std::cout << arg;
    std::cout << "\n";
}
void double_format(double arg){
     std::cout << "double format :\t";
    std::cout << arg;
    std::cout << "\n";
}

void output_in_different_formats(t_type type, const std::string &s){
    t_formats formats;

    if(type == CHARACTER){
        formats.char_format = s[0];
        char_format(formats.char_format);
        integer_format(static_cast<int>(formats.char_format));
        float_format(static_cast<float>(formats.char_format));
        double_format(static_cast<double>(formats.char_format));
    }

    else if(type == INTEGER){
        formats.int_format = std::atoi(s.c_str());
    
        if(formats.int_format >= INT8_MIN && formats.int_format <= INT8_MAX)
            char_format(static_cast<char>(formats.int_format));
        else
            std::cout << "out of range\n";
        integer_format(static_cast<int>(formats.int_format));

    }
}

void ScalarConverter::convert(const std::string &string){
    t_type type;
    getType(string, type);
    output_in_different_formats(type, string);
}