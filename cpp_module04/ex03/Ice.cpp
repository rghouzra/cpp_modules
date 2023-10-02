#include "Ice.hpp"

Ice::Ice()
{
	std::cout << "Ice : Default Constructor Called" << std::endl;
	this->setType("ice");
}

Ice::~Ice()
{
	std::cout << "Ice : Destructor Called" << std::endl;
}

Ice::Ice(Ice const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

Ice	&Ice::operator= (const Ice &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		this->setType(obj.getType());
	}
	return (*this);
}
