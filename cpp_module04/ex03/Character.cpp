#include "Character.hpp"

Character::Character()
{
	name = "undefined";
	std::cout << "Character : Default Constructor Called" << std::endl;
	for (size_t i = 0; i < 4; i++){
		slot[i] = NULL;
	}
	
}

Character::Character (std::string _name){
	name = _name;
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
}

Character::Character(Character const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
	{
		for(int i = 0; i < 4; i++){
			AMateria *ptr = obj.getSlotAtIndex(i);
			if(ptr){
				slot[i] = ptr->clone();
				*slot[i] = *ptr;
			}
			this->name = obj.getName();
		}
	}
}

Character	&Character::operator= (const Character &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		for(int i = 0; i < 4; i++){
			AMateria *ptr = obj.getSlotAtIndex(i);
			if(slot[i])
				delete slot[i];
			slot[i] = ptr;
		}
		name  = obj.getName();
	}
	return (*this);
}

AMateria *Character::getSlotAtIndex(int index) const{
	if(index >= 0 && index < 4)
		return slot[index];
}

std::string const & Character::getName() const{
	return name;
}


void Character::equip(AMateria* m){
	if(!m)
		return ;
	for (size_t i = 0; i < 4; i++)
	{
		if(slot[i] == NULL){
			slot[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx){
	if(idx >= 0 && idx < 3){
		slot[idx] = NULL;
	}
}
void Character::use(int idx, ICharacter& target){
	if (idx >=0 && idx < 4 && slot[idx]){
		slot[idx]->use(target);
	}
}