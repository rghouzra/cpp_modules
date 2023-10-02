#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria : Default Constructor Called" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria : Destructor Called" << std::endl;
}

AMateria::AMateria(AMateria const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

AMateria	&AMateria::operator= (const AMateria &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		//	this->attributes = obj.attributes;
		//	...
	}
	return (*this);
}
