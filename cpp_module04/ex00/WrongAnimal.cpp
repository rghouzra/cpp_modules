#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal : Default Constructor Called" << std::endl;
	type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal : Destructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

WrongAnimal	&WrongAnimal::operator= (const WrongAnimal &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		this->type = obj.getType();
	}
	return (*this);
}

void WrongAnimal::makeSound() const{
	std::cout << "c++ is way better than c\n";
}

void WrongAnimal::settype(const std::string &oth){
	type = oth;
}
std::string WrongAnimal::getType(void) const{
	return type;
}