#include "Character.hpp"

Character::Character()
{
	std::cout << "Character : Default Constructor Called" << std::endl;
	slot = new AMateria*[4];
	for (size_t i = 0; i < 4; i++)
	{
		slot[i] = NULL;
	}
	
}

Character::~Character()
{
	std::cout << "Character : Destructor Called" << std::endl;
	for (size_t i = 0; i < 4; i++)
	{
		if(slot[i]){
			delete slot [i];
		}
	}
	delete []slot;
}

Character::Character(Character const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

Character	&Character::operator= (const Character &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		this->slot =  new AMateria*[4];

	}
	return (*this);
}


std::string const & Character::getName() const{
	return name;
}


void Character::equip(AMateria* m){
	
}
void Character::unequip(int idx){

}
void Character::use(int idx, ICharacter& target){
	if (idx >=0 && idx < 4 && slot[idx]){
		slot[idx]->use(target);
	}
}