#ifndef MateriaSource_HPP
#define MateriaSource_HPP

#include <iostream>
#include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource
{
	public	:
		MateriaSource ();
		MateriaSource (MateriaSource const &obj);
		~MateriaSource ();
		MateriaSource &operator= (const MateriaSource &obj);
		void learnMateria(AMateria *m);
		AMateria *createMateria(std::string const & type);
		AMateria *getSlotAtIndex(int index) const;
	private	:
		AMateria *slots[4];
};

#endif
