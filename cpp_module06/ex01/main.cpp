#include <iostream>
#include <bitset>
#include "Serializer.hpp"

int main() {
   Data var;
   var.d = 1337;
   uintptr_t integerformat = Serializer::serialize(&var);
   Data *ptr = Serializer::deserialize(integerformat);
   ptr->d = 42;
   std::cout << var.d;
}
