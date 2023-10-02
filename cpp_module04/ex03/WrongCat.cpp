#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat : Default Constructor Called" << std::endl;
	this->settype("WrongCat");
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat : Destructor Called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

WrongCat	&WrongCat::operator= (const WrongCat &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		this->settype(obj.getType());
	}
	return (*this);
}


void WrongCat::makeSound()const{
	std::cout <<"WrongCat sound\n";
}