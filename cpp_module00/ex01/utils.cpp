#include "PhoneBook.hpp"

size_t sizeContacts(PhoneBook contacts){
	for (size_t i = 0; i < 8; i++)
	{
		if(!contacts.contacts[i].filled)
			return i+1;
	}
	return 8;
}

void pushback(PhoneBook *contacts, Contact contact){
	size_t size = sizeContacts(*contacts);
	contacts->contacts[(size == 8) ? 0 : size - 1] = contact;
}