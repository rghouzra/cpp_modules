#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat : Default Constructor Called" << std::endl;
	this->settype("Cat");
}

Cat::~Cat()
{
	std::cout << "Cat : Destructor Called" << std::endl;
}

Cat::Cat(Cat const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

Cat	&Cat::operator= (const Cat &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		this->settype(obj.getType());
	}
	return (*this);
}


void Cat::makeSound()const{
	std::cout <<"cat sound\n";
}