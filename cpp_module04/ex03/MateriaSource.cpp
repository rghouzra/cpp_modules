#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource : Default Constructor Called" << std::endl;
	for(int i = 0; i < 4; i++)
		slots[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource : Destructor Called" << std::endl;
	for (size_t i = 0; i < 4; i++)
	{
		if(slots[i]){
			delete slots [i];
		}
	}
}

MateriaSource::MateriaSource(MateriaSource const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj){
		for(int i = 0; i < 4; i++){
		}
	}
}

MateriaSource	&MateriaSource::operator= (const MateriaSource &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj){
		
	}
	return (*this);
}


void MateriaSource::learnMateria(AMateria *m){

}

AMateria *MateriaSource::createMateria(std::string const & type){
	
}