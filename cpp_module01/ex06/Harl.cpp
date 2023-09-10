#include "Harl.hpp"

Harl::Harl(){

}

Harl::~Harl(){

}

void Harl::debug(void){
	std::cout <<"[ DEBUG ]" << "\n";
	std::cout << DEBUG <<"\n";
	std::cout <<"\n";
}
void Harl::info(void){
	std::cout <<"[ INFO ]" << "\n";
	std::cout << INFO <<"\n";
	std::cout << "\n";
}
void Harl::warning(void){
	std::cout <<"[ WARNING ]" << "\n";
	std::cout << WARNING <<"\n";
	std::cout <<"\n";
}
void Harl::error(void){
	std::cout <<"[ ERROR ]" << "\n";
	std::cout << ERROR <<"\n";
	std::cout <<"\n";
}

static int getIndex(std::string levels[], std::string needle){
	for (size_t i = 0; i < 4; i++)
	{
		if(levels[i] == needle)
			return i;
	}
	return -1;
}

void Harl::complain(std::string level) {
	void (Harl::*ptrfuncs[4])(void) = {&Harl::error,&Harl::warning, &Harl::info, &Harl::debug };
	std::string levels[4] = { "ERROR", "WARNING","INFO", "DEBUG"};
	int index = getIndex(levels, level);
	switch (index)
	{
		case 0:
			(this->*ptrfuncs[0])();
			break;
		case 1:
			(this->*ptrfuncs[1])();
			complain(levels[0]);
			break;
		case 2:
			(this->*ptrfuncs[2])();
			complain(levels[1]);
			break;
		case 3:
			(this->*ptrfuncs[3])();
			complain(levels[2]);
			break;
		default:
			std::cout <<"[ Probably complaining about insignificant problems ]\n";
			break;
	}
}
