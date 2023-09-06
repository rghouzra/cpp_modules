#include "PhoneBook.hpp"

void fill_contact(Contact &contact, int *index){
	std::string *ptrs[6];
	Contact tmp;

	ptrs[0] = &tmp.getFirstName();
	ptrs[1] = &tmp.getLastName();
	ptrs[2] = &tmp.getNickName();
	ptrs[3] = &tmp.getPhoneNumber();
	ptrs[4] = &tmp.getDarkestSecret();
	// std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
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
			size += (index <= 8);
			index *= !(index == 8);
			fill_contact(obj.getContacts(index), & index);
		}
		else if(input ==  "SEARCH"){
			search(obj, size);
		}
	}
}
