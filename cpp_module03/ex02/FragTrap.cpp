#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap : Default Constructor Called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap : Destructor Called" << std::endl;
}

FragTrap::FragTrap(const std::string &_name){
	setName(_name);
	SetEnergyPoints(100);
	SetAttackDamage(30);
	SetHitPoints(100);
}

FragTrap::FragTrap(FragTrap const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

void FragTrap::highFivesGuys(void){
	std::cout << "request high five guys\n";
}

FragTrap	&FragTrap::operator= (const FragTrap &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		setName(obj.getname());
		SetEnergyPoints(obj.GetEnergyPoints());
		SetAttackDamage(obj.GetAttackDamage());
		SetHitPoints(obj.GetHitPoints());
	}
	return (*this);
}
