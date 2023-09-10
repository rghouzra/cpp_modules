#include "Harl.hpp"

int main(int ac, char **av){
	Harl obj;
	if(ac > 1)
		obj.complain(av[1]);
}