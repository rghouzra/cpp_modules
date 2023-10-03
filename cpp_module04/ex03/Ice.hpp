#ifndef Ice_HPP
#define Ice_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class	Ice : public AMateria
{
	public	:
		Ice ();
		Ice (Ice const &obj);
		~Ice ();
		Ice &operator= (const Ice &obj);
		void use(ICharacter&target);
		AMateria* clone();
	private	:

};

#endif
