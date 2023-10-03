#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource : Default Constructor Called" << std::endl;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource : Destructor Called" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

MateriaSource	&MateriaSource::operator= (const MateriaSource &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		//	this->attributes = obj.attributes;
		//	...
	}
	return (*this);
}


void learnMateria(AMateria *m){

}

AMateria *createMateria(std::string const & type){

}