#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog : Default Constructor Called" << std::endl;
	this->settype("Dog");
	cerveau = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog : Destructor Called" << std::endl;
	delete cerveau;
}

Dog::Dog(Dog const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}


Brain *Dog::GetCerveau() const{
	return cerveau;
}

void Dog::SetCerveau(Brain *oth){
	cerveau = new Brain;
	if(oth)
		*cerveau = *oth;
}

Dog	&Dog::operator= (const Dog &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		this->settype(obj.getType());
		this->SetCerveau(obj.GetCerveau());
	}
	return (*this);
}


void Dog::makeSound()const{
	std::cout<<"Dog sound\n";
}
