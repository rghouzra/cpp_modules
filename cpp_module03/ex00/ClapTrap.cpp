#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout <<"Default constructor is called\n";
}

ClapTrap::ClapTrap(std::string _name)
{
	std::cout << "paramterized is called\n";
	name = _name;
	energy_points = 10;
	hit_points = 10;
	attack_damage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout <<"Destructor is called\n";
}

ClapTrap::ClapTrap(ClapTrap const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

ClapTrap	&ClapTrap::operator= (const ClapTrap &obj)
{
}
void ClapTrap::attack(const std::string& target){
	if(energy_points > 0){
		std::cout <<"ClapTrap "<< name << " attacks " << target<<", causing "<<  attack_damage <<" points of damage!\n";
		energy_points--;
	}
}
void ClapTrap::takeDamage(unsigned int amount){

}
void ClapTrap::beRepaired(unsigned int amount){
	hit_points += amount;
}

std::string ClapTrap::getname(){
	return name;
}