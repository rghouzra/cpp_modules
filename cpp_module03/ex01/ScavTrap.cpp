#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap : Default Constructor Called" << std::endl;
}

ScavTrap::ScavTrap(std::string _name)
{
    setName(_name);
    SetEnergyPoints(50);
    SetHitPoints(100);
    SetAttackDamage(20);
    std::cout << "ScavTrap : Paramterized Constructor Called" << std::endl;
}

void ScavTrap::guardGate(){
    std::cout << this->getname() << " Now in gate keeper mode\n";
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap : Destructor Called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& obj)
{
    std::cout << "Copy Constructor Called" << std::endl;
    if (this != &obj)
        *this = obj;
}

void ScavTrap::attack(const std::string& target){
    	if(energy_points > 0 && hit_points > 0){
		std::cout <<"scavtrap "<< name << " attacks " << target<<\
		", causing "<<  attack_damage <<" points of damage!\n";
		energy_points--;
		attack_damage = (attack_damage > hit_points) ? attack_damage -= hit_points : 0;
	}
	else
		std::cout << "Can't attack\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj)
{
    std::cout << "Copy Assignment Operator Called" << std::endl;
    if (this != &obj)
    {
        setName(obj.getname());
        SetEnergyPoints(obj.GetEnergyPoints());
        SetHitPoints(obj.GetHitPoints());
        SetAttackDamage(obj.GetAttackDamage());
    }
    return (*this);
}
