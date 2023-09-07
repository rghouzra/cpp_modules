#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name){
	Zombie *ptr;

	ptr = new Zombie[N];
	for (size_t i = 0; i < N; i++){
		ptr[i].setZombieName(name);
	}
	return ptr;
}