#include "Zombie.hpp"
#include "newZombie.hpp"
#include "randomChump.hpp"
int main(){
	Zombie b("reda2");

	b.announce();
	Zombie *a = newZombie("reda");
	a->announce();
	randomChump("adam");
	a->~Zombie();
	b.~Zombie();
}
