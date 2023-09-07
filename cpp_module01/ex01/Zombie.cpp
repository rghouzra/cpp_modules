#include "Zombie.hpp"

void Zombie::announce(void){
	std::cout<<name<<": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::setZombieName(std::string s){
	name = s;
}

Zombie::~Zombie(){
	std::cout<<"destructor of "<<name <<" is called\n";
}

Zombie::Zombie(){
	//constructor
}
