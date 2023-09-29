#ifndef ClapTrap_HPP
#define ClapTrap_HPP

#include <iostream>

class	ClapTrap
{
	public	:
	/******************/
		ClapTrap (std::string _name);
		ClapTrap ();
		ClapTrap (ClapTrap const &obj);
		~ClapTrap ();
		ClapTrap &operator= (const ClapTrap &obj);
	/******************/
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	/******************/
	std::string  getname()const;
	unsigned int GetHitPoints()const;
	unsigned int GetEnergyPoints()const;
	unsigned int GetAttackDamage()const;
	/******************/
	void  setName(const std::string &oth);
	void SetHitPoints(unsigned int oth);
	void SetEnergyPoints(unsigned int oth);
	void SetAttackDamage(unsigned int oth);
	/******************/
	private	:
		std::string name;
		unsigned int hit_points;
		unsigned int energy_points;
		unsigned int attack_damage;

};

#endif
