#ifndef Character_HPP
#define Character_HPP

#include <iostream>

#include "ICharacter.hpp"
#include "AMateria.hpp"
class	Character : ICharacter
{
	public	:
		Character ();
		Character (Character const &obj);
		~Character ();
		Character &operator= (const Character &obj);
		/***************************/
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
	private	:
		std::string name;
		AMateria **slot;
};

#endif
