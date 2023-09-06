#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include "utils.hpp"
#include "Contact.hpp"
#include <iostream>
class PhoneBook
{
    private:
        Contact contacts[8];
    public:
        Contact &getContacts(int index){return contacts[index];};
};
#endif