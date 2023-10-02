#ifndef Cure_HPP
#define Cure_HPP

#include <iostream>
#include "AMateria.hpp"

class	Cure : AMateria
{
	public	:
		Cure ();
		Cure (Cure const &obj);
		~Cure ();
		Cure &operator= (const Cure &obj);
		
	private	:
		//	DataType	attributes.
};

#endif
