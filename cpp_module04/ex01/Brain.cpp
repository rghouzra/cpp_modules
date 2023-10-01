#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain : Default Constructor Called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain : Destructor Called" << std::endl;
}

Brain::Brain(Brain const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

std::string Brain::getideas(size_t index) const{
	if((index >= 0 && index < NB_OF_IDEAS))
		return ideas[index];
	return "out of range";
}

void Brain::setideas(const std::string *oth) {
	if(oth)
		for(size_t i = 0; i < NB_OF_IDEAS; i++)
			ideas[i] = oth[i];
}


Brain	&Brain::operator= (const Brain &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		for(size_t i = 0; i < NB_OF_IDEAS; i++)
			ideas[i] = obj.getideas(i);
	}
	return (*this);
}
