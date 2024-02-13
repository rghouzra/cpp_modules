//
// Created by reda ghouzraf on Mon Feb 12 03:18:32 2024
//
#ifndef Serializer_HPP
#define Serializer_HPP

#include <iostream>
#include "Data.hpp"

class Serializer
{
public:
    Serializer(const Serializer& obj);
    ~Serializer();
    Serializer& operator=(const Serializer& obj);
    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
private:
    Serializer();
};
#endif /*Serializer_HPP*/
