#ifndef ClapTrap_HPP
#define ClapTrap_HPP

#include <iostream>

class	ClapTrap
{
	public	:
	std::string getname();
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
	private	:
		std::string name;
		unsigned int hit_points;
		unsigned int energy_points;
		unsigned int attack_damage;

};

#endif
