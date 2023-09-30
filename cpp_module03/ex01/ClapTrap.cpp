#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout <<"Claptrap Default constructor is called\n";
}

ClapTrap::ClapTrap(std::string _name)
{
	std::cout << "Claptrap paramterized is called\n";
	name = _name;
	energy_points = 10;
	hit_points = 10;
	attack_damage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout <<"Claptrap Destructor " << name <<" is called\n";
}

ClapTrap::ClapTrap(ClapTrap const &obj)
{
	std::cout << "Claptrap Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

std::string ClapTrap::getname()const{
	return name;
}

unsigned int ClapTrap::GetHitPoints() const{
	return hit_points;
}
unsigned int ClapTrap::GetEnergyPoints()const{
	return energy_points;
}
unsigned int ClapTrap::GetAttackDamage()const{
	return energy_points;
}

void  ClapTrap::setName(const std::string &oth){
	name = oth;
}
void ClapTrap::SetHitPoints(unsigned int oth){
	hit_points = oth;
}
void ClapTrap::SetEnergyPoints(unsigned int oth){
	energy_points =  oth;
}
void ClapTrap::SetAttackDamage(unsigned int oth){
	attack_damage  = oth;
}

ClapTrap	&ClapTrap::operator= (const ClapTrap &obj)
{
	this->attack_damage = obj.GetAttackDamage();
	this->energy_points = obj.GetEnergyPoints();
	this->name = obj.getname();
	this->hit_points = obj.GetHitPoints();
	return *this;
}
void ClapTrap::attack(const std::string& target){
	if(energy_points > 0 && hit_points > 0){
		std::cout <<"ClapTrap "<< name << " attacks " << target<<\
		", causing "<<  attack_damage <<" points of damage!\n";
		energy_points--;
		attack_damage = (attack_damage > hit_points) ? attack_damage -= hit_points : 0;
	}
	else
		std::cout << "Can't attack\n";
}


void ClapTrap::takeDamage(unsigned int amount){
	if(hit_points > 0){
		std::cout << name << " take " << amount <<"\n";
		hit_points = (hit_points > amount) ? hit_points - amount : 0;
	}
	else
		std::cout << "cant take damage\n";
}

void ClapTrap::beRepaired(unsigned int amount){
	if(energy_points > 0 && hit_points > 0){
		std::cout << name << " be repaired\n";
		hit_points += amount;
		energy_points--;
	}
	else
		std::cout << "cant be repaired\n";
}
