#include "PhoneBook.hpp"

void fill_contact(Contact &contact, int *index){
	std::string *ptrs[6];
	Contact tmp;

	ptrs[0] = &tmp.getFirstName();
	ptrs[1] = &tmp.getLastName();
	ptrs[2] = &tmp.getNickName();
	ptrs[3] = &tmp.getPhoneNumber();
	ptrs[4] = &tmp.getDarkestSecret();

	for (size_t i = 0; i < 5; i++)
	{
		std::string s;
		std::cin >> s;
		if(s.empty())
			exit(1) ;
		*ptrs[i] = s;
	}
	contact = tmp;
	*index = *index + 1;
}

void print_and_trunc(std::string s){
	size_t i = 0;
	for (; i < s.size(); i++)
	{
		std::cout << s[i];
		if(i != s.size()-1 && i ==8){
			std::cout<<".";
			return;
		}
	}
	while(++i <=10)
	std::cout << " ";
}
void search(PhoneBook obj, size_t size){
	(void)size;
	size_t index;
	for (size_t i = 0; i < size; i++)
	{
		std::cout << i<<"|";
		print_and_trunc(obj.getContacts(i).getFirstName());
		std::cout<<"|";
		print_and_trunc(obj.getContacts(i).getLastName());
		std::cout<<"|";
		print_and_trunc(obj.getContacts(i).getNickName());
		std::cout<<"\n";
	}
	std::cin >> index;
	if(index >= size || index < 0)
	{
		std::cerr<<"out of range\n";
		return ;
	}
	std::cout<<obj.getContacts(index).getFirstName()<<"\n";
	std::cout<<obj.getContacts(index).getLastName()<<"\n";
	std::cout<<obj.getContacts(index).getNickName()<<"\n";
	std::cout<<obj.getContacts(index).getPhoneNumber()<<"\n";
	std::cout<<obj.getContacts(index).getDarkestSecret()<<"\n";
}

int main(){
    PhoneBook obj;
	std::string input;

	int index = 0;
	size_t size = 0; 
	while(1){
		std::cout<<"> ";
		input = "";
		std::cin>> input;
		if(input.empty() || input == "EXIT")
			exit(1);
		if(input == "ADD"){
			size += (index <= 8 && size < 8);
			index *= !(index == 8);
			fill_contact(obj.getContacts(index), & index);
		}
		else if(input ==  "SEARCH"){
			search(obj, size);
		}
	}
}
