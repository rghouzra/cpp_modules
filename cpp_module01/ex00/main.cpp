#include "Zombie.hpp"

int main(){
	Zombie b("reda2");

	b.announce();
	Zombie *a = newZombie("reda");
	a->announce();
	randomChump("adam");
	a->~Zombie();
	b.~Zombie();
	delete a;
}
