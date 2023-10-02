#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal : Default Constructor Called" << std::endl;
	type = "animal";
}

Animal::~Animal()
{
	std::cout << "Animal : Destructor Called" << std::endl;
}

Animal::Animal(Animal const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

Animal	&Animal::operator= (const Animal &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		this->type = obj.getType();
	}
	return (*this);
}

void Animal::makeSound() const{
	std::cout << "rust is way better than c\n";
}

void Animal::settype(const std::string &oth){
	type = oth;
}
std::string Animal::getType(void) const{
	return type;
}