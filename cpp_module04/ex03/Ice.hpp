#ifndef Ice_HPP
#define Ice_HPP

#include <iostream>
#include "AMateria.hpp"

class	Ice : AMateria
{
	public	:
		Ice ();
		Ice (Ice const &obj);
		~Ice ();
		Ice &operator= (const Ice &obj);

	private	:

};

#endif
