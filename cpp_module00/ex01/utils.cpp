#include "PhoneBook.hpp"

size_t sizeContacts(PhoneBook contacts){
	for (size_t i = 0; i < 8; i++)
	{
		if(!contacts.contacts[i].filled)
			return i+1;
	}
	return 8;
}