#include "ICharacter.hpp"

ICharacter::ICharacter()
{
	std::cout << "ICharacter : Default Constructor Called" << std::endl;
}

ICharacter::~ICharacter()
{
	std::cout << "ICharacter : Destructor Called" << std::endl;
}

ICharacter::ICharacter(ICharacter const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

ICharacter	&ICharacter::operator= (const ICharacter &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		//	this->attributes = obj.attributes;
		//	...
	}
	return (*this);
}
