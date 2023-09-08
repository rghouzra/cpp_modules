#include "Weapon.hpp"

Weapon::Weapon(){
	
}
Weapon::Weapon(std::string type)
{
	this->setType(type);
}

Weapon::~Weapon()
{
}

const std::string & Weapon::getType(){
	return type;
}

void Weapon::setType(std::string newStr){
	type = newStr;
}