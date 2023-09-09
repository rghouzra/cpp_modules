# include "UltimateSed.hpp"

int main(int ac, char **av){
	if(ac == 4){
		UltimateSed obj(av[1], av[2], av[3]);
		obj.replace();
		return 0;
	}
	std::cout<<"Error::not the number of argument\n";
	return 1;
}