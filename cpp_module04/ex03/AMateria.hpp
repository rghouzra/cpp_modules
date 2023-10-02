#ifndef AMateria_HPP
#define AMateria_HPP

#include <iostream>

class	AMateria
{
	public	:
		AMateria ();
		AMateria (AMateria const &obj);
		~AMateria ();
		AMateria &operator= (const AMateria &obj);

	private	:
		//	DataType	attributes.
};


#endif
