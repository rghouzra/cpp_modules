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
	(void)obj;
	return (*this);
}

void Ice::use(ICharacter &target){
	std::cout <<"* shoots an ice bolt at " << target.getName()<<'\n';
}

AMateria* Ice::clone() const{
	AMateria *ptr;

	ptr = new Ice;
	return ptr;
}

// void Ice::use(int idx, ICharacter& target){
// 	std::
// }