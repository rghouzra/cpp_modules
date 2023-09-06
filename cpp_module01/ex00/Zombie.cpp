#include "Zombie.hpp"

void Zombie::announce(void){
	std::cout<<name<<": BraiiiiiiinnnzzzZ...\n";
}

Zombie::~Zombie(){
	std::cout<<"destructor of "<<name <<" is called\n";
}

Zombie::Zombie(std::string str){
	name = str;
}
