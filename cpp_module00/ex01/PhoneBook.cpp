#include <iostream>
#include "PhoneBook.hpp"

int main(){
    PhoneBook object;

    std::cin.getline(object.contacts[0].first_name, 1023);
    std::cin.getline(object.contacts[0].nick_name, 1023);
    std::cin.getline(object.contacts[0].phone_number, 1023);
    std::cin >> object.contacts[0].index;
    std::cout<<object.contacts[0].first_name;
}
