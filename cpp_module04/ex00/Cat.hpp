#ifndef Cat_HPP
#define Cat_HPP

#include <iostream>
#include "Animal.hpp"
class	Cat : public Animal
{
	public	:
		Cat ();
		Cat (Cat const &obj);
		~Cat ();
		Cat &operator= (const Cat &obj);
		/**/
		void makeSound() const;
	private	:

};

#endif
