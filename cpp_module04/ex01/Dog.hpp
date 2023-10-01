#ifndef Dog_HPP
#define Dog_HPP

#include "Brain.hpp"
#include "Animal.hpp"
class	Dog : public Animal
{
	public	:
		Dog ();
		Dog (Dog const &obj);
		~Dog ();
		Dog &operator= (const Dog &obj);
		/*****************/
		void makeSound() const;
	private	:
	Brain *cerveau;
};

#endif
