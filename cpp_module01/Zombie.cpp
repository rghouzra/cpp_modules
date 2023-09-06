#include "Zombie.hpp"

void Zombie::announce(void){
	std::cout<<name<<"e>: BraiiiiiiinnnzzzZ...\n";
}

Zombie::Zombie(std::string str){
	name = str;
}
