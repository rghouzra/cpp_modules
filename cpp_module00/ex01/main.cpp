#include "PhoneBook.hpp"

void fill_contact(Contact &contact, int *index){
	std::string *ptrs[6];
	Contact tmp;
	
	ptrs[0] = &tmp.first_name;
	ptrs[1] = &tmp.last_name;
	ptrs[2] = &tmp.nick_name;
	ptrs[3] = &tmp.phone_number;
	ptrs[4] = &tmp.darkest_secret;
	for (size_t i = 0; i < 5; i++)
	{
		std::string s;
		std::getline(std::cin, s);
		if(s.empty())
			exit(1) ;
		*ptrs[i] = s;
	}
	contact = tmp;
	*index = *index + 1;
}
/*
Display the saved contacts as a list of 4 columns: index, first name, last
name and nickname
Each column must be 10 characters wide. A pipe character (’|’) separates
them. The text must be right-aligned. If the text is longer than the column,
it must be truncated and the last displayable character must be replaced by a
dot (’.’).
◦ Then, prompt the user again for the index of the entry to display. If the index
is out of range or wrong, define a relevant behavior. Otherwise, display the
contact information, one field per line.
*/

void print_and_trunc(std::string s){
	for (size_t i = 0; i < s.size(); i++)
	{
		std::cout << s[i];
		if(i != s.size()-1 && i ==8){
			std::cout<<".";
			break;
		}
	}
	
}
void search(Contact contact[], size_t size){
	size_t index;
	for (size_t i = 0; i < size; i++)
	{
		std::cout << i<<"|";
		print_and_trunc(contact[i].first_name);
		std::cout<<"|";
		print_and_trunc(contact[i].last_name);
		std::cout<<"|";
		print_and_trunc(contact[i].nick_name);
		std::cout<<"\n";
	}
	std::cin >> index;
	if(index >= size || index < 0)
	{
		std::cerr<<"out of range\n";
		return ;
	}
	std::cout<<contact[index].first_name<<"\n";
	std::cout<<contact[index].last_name<<"\n";
	std::cout<<contact[index].nick_name<<"\n";
	std::cout<<contact[index].phone_number<<"\n";
	std::cout<<contact[index].darkest_secret<<"\n";
}

int main(){
    PhoneBook obj;
	std::string input;

	input = "init";
	int index = 0;
	size_t size = 0; 
	while(!input.empty() && input != "EXIT"){
		std::cout<<"> ";
		std::cin>> input;
		if(!input.empty() || input == "EXIT")
			exit(1);
		if(input == "ADD"){
			size++;
			index *= !(index == 7);
			fill_contact(obj.contacts[index], & index);
		}
		else if(input ==  "SEARCH"){
			search(obj.contacts, size);
		}
	}
}
