#include "Zombie.hpp"

# define N 10

int main(){
	Zombie *ptr;

	ptr = zombieHorde(N, "dexter");
	for (size_t i = 0; i < N; i++)
	{
		ptr[i].announce();
	}
	delete[] ptr;
}
