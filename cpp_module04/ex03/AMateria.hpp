#ifndef AMateria_HPP
#define AMateria_HPP

#include <iostream>
#include "ICharacter.hpp"

class	AMateria
{
	public	:
		/******************/
		AMateria ();
		AMateria (AMateria const &obj);
		~AMateria ();
		AMateria(std::string const & type);
		AMateria &operator= (const AMateria &obj);
		/******************/
		std::string const &getType() const;
		void setType(const std::string &oth);
		/******************/
		virtual AMateria* clone() const = 0;
		// virtual void use(ICharacter& target);
	protected	:
		std::string type;
};


#endif
