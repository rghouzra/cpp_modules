#include "HumanA.hpp"
/*
<name> attacks with their <weapon type>
*/


HumanA::HumanA(std::string str, Weapon &new_Weapon): Name(str), WeaponType(new_Weapon)
{
	WeaponType = new_Weapon;
	Name = str;
}

HumanA::~HumanA(){

}
void HumanA::attack(){
	std::cout << Name << " attacks with their " << WeaponType.getType()<<"\n";
}