#include "Harl.hpp"

Harl::Harl(){

}

Harl::~Harl(){

}

void Harl::debug(void){
	std::cout << DEBUG <<"\n";
}
void Harl::info(void){
	std::cout << INFO <<"\n";
}
void Harl::warning(void){
	std::cout << WARNING <<"\n";
}
void Harl::error(void){
	std::cout << ERROR <<"\n";
}

void Harl::complain(std::string level) {
	void (Harl::*ptrfuncs[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (size_t i = 0; i < 4; i++)
	{
		if(levels[i] == level)
		{
			(this->*(ptrfuncs[i]))();
			return ;
		}
	}
}
