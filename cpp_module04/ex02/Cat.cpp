#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat : Default Constructor Called" << std::endl;
	this->settype("Cat");
	cerveau = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat : Destructor Called" << std::endl;
	delete cerveau;
}

Cat::Cat(Cat const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
		if (this != &obj)
	{
		this->settype(obj.getType());
		this->cerveau = new Brain;
		*this->cerveau = *obj.GetCerveau();
	}
}

Cat	&Cat::operator= (const Cat &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		this->settype(obj.getType());
		this->SetCerveau(obj.GetCerveau());
	}
	return (*this);
}

Brain *Cat::GetCerveau() const{
	return cerveau;
}

void Cat::SetCerveau(Brain *oth){
	if(oth){
		*cerveau = *oth;
	}
}


void Cat::makeSound()const{
	std::cout <<"cat sound\n";
}