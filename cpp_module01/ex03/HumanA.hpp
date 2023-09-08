#ifndef HUMANA_HPP
# define HUMANA_HPP
#include "Weapon.hpp"
class HumanA
{
private:
	Weapon &WeaponType;
	std::string Name;
public:
	HumanA(std::string str, Weapon &new_Weapon);
	~HumanA();
	void attack();
};

#endif