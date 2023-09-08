#include "HumanB.hpp"

void HumanB::attack(){
	if(WeaponType != 0x0){
		std::cout << Name <<" attacks with their weapon " << WeaponType->getType() <<"\n";
	}
	else{
		std::cerr << "u tried to dereference a null pointer which can out program to CRASH\n";
	}
}
HumanB::HumanB(std::string str){
	Name = str;
}

void HumanB::setWeapon(Weapon &ptr){
	WeaponType = &ptr;
}
HumanB::~HumanB(){

}