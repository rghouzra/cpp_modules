#include "PhoneBook.hpp"


void addto(Contact *obj){
	unsigned long long *ptr;
	std::string input;
	ptr = (unsigned long long*)&obj;
	for (size_t i = 0; i < 5; i++)
	{
		std::string input;
		std::cin >> input;
		ptr = (unsigned long long *)&input;
		ptr += sizeof(std::string);
	}
}

void search(PhoneBook *obj){
	std::string input;

	(void)obj;
	input = "";
	while(!input.empty()){

	}
}

int main(){
    PhoneBook obj;
	Contact Contact[8];
	std::string input;

	input = "init";
	int i = 0;
	while(!input.empty() && input != "EXIT"){
		std::cout << "Phonebook > ";
		std::cin >> input;
		if(input.empty() || input == "EXIT")
			exit(1);
		if(input == "ADD")
			addto(&obj.contacts[i]);
		std::cout <<"["<< obj.contacts[0].first_name <<" "<< obj.contacts[0].last_name  << "]"<<std::endl;
		if(input == "SEARCH")
			search(&obj);
		else
			std::cout <<"unkown command\n";
	}
}
