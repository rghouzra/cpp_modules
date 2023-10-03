#include "Cure.hpp"

Cure::Cure()
{
	std::cout << "Cure : Default Constructor Called" << std::endl;
	this->setType("cure");
}

Cure::~Cure()
{
	std::cout << "Cure : Destructor Called" << std::endl;
}

Cure::Cure(Cure const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

AMateria* Cure::clone(){
	AMateria *ptr;

	ptr = new Cure;
	return ptr;
}

void Cure::use(ICharacter& target){
		std::cout <<"* heals "<<target.getName() <<"’s wounds *\n";
}

Cure	&Cure::operator= (const Cure &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	(void)obj;
	return (*this);
}
