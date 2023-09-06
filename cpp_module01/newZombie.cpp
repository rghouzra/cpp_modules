#include "Zombie.hpp"

Zombie* newZombie( std::string name ){
	Zombie *obj;

	obj = new Zombie(name);
	return obj;
}