#ifndef Cure_HPP
#define Cure_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class	Cure : public AMateria
{
	public	:
		Cure ();
		Cure (Cure const &obj);
		~Cure ();
		Cure &operator= (const Cure &obj);
		void use(ICharacter& target);
		AMateria* clone() const;
	private	:
		//	DataType	attributes.
};

#endif
