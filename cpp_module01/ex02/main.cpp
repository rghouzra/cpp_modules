#include <iostream>

# define N 10

int main(){
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string &ref = str;

	std::cout <<&str<<"\n";
	std::cout <<ptr<<"\n";
	std::cout <<&ref<<"\n";
	std::cout <<str<<"\n";
	if(ptr) {
		std::cout <<*ptr<<"\n";
	}
	std::cout <<ref<<"\n";
}
