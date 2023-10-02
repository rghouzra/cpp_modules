#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "AAnimal : Default Constructor Called" << std::endl;
	type = "Aanimal";
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal : Destructor Called" << std::endl;
}

AAnimal::AAnimal(AAnimal const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

AAnimal	&AAnimal::operator= (const AAnimal &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		this->type = obj.getType();
	}
	return (*this);
}

// void AAnimal::makeSound() const{
// 	std::cout << "rust is way better than c\n";
// }

void AAnimal::settype(const std::string &oth){
	type = oth;
}
std::string AAnimal::getType(void) const{
	return type;
}