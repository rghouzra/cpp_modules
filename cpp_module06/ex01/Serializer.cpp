//
// Created by reda ghouzraf on Mon Feb 12 03:18:32 2024
//
#include "Serializer.hpp"

Serializer::Serializer()
{
    std::cout << "Serializer : Default Constructor Called" << std::endl;
}

Serializer::~Serializer()
{
    std::cout << "Serializer : Destructor Called" << std::endl;
}

Serializer::Serializer(const Serializer& obj){
    std::cout << "Copy Constructor Called" << std::endl;
    if (this != &obj)
        *this = obj;
}

Serializer& Serializer::operator=(const Serializer& obj){
    std::cout << "Copy Assignment Operator Called" << std::endl;
    if (this != &obj)
    {
        // this->attributes = obj.attributes;
        // ...
    }
    return (*this);
}

uintptr_t Serializer::serialize(Data* ptr){
    return reinterpret_cast<uintptr_t>(ptr);
}
Data* Serializer::deserialize(uintptr_t raw){
    return reinterpret_cast<Data*>(raw);
}
