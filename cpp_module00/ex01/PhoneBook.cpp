#include <iostream>
#include "PhoneBook.hpp"

int main(int ac, char **av){
	PhoneBook s;

	s.s[0] = av[ac - 1];
	gets(s.s[0]);
	std::cout << s.s[0];
}
