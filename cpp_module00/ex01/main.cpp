#include "PhoneBook.hpp"

int main(){
    PhoneBook object;
	std::string input;

	input = "";
	while(!input.empty() && input != "EXIT"){
		std::cout << "Phonebook ";
		std::getline(std::cin, input);
		if(input.empty() || input == "EXIT")
			exit(1);
		// while()
	}
}
