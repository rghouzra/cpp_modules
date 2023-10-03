#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria : Default Constructor Called" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria : Destructor Called" << std::endl;
}

AMateria::AMateria(const std::string &type){
	this->type = type;
	std::cout <<"AMateria : paramterized Constructor Called" << std::endl;
}

AMateria::AMateria(AMateria const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

std::string const &AMateria::getType() const{
	return type;
}

void AMateria::setType(const std::string &oth){
	type = oth;
}

void AMateria::use(ICharacter& target){
	(void)target;
}

AMateria	&AMateria::operator= (const AMateria &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	(void)obj;
	return (*this);
}
