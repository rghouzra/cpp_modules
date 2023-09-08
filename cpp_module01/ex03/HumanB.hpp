#ifndef HUMANB_HPP
# define HUMANB_HPP
#include "Weapon.hpp"
class HumanB
{
private:
	Weapon *WeaponType;
	std::string Name;
public:
	HumanB(std::string s);
	~HumanB();
	void setWeapon(Weapon &ptr);
	void attack();
};

#endif

