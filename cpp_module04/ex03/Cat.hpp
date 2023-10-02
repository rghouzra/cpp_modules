#ifndef Cat_HPP
#define Cat_HPP

#include <iostream>
#include "Brain.hpp"
#include "AAnimal.hpp"
class	Cat : public AAnimal
{
	public	:
		Cat ();
		Cat (Cat const &obj);
		~Cat ();
		Cat &operator= (const Cat &obj);
		/***************************/
		Brain *GetCerveau() const;
		void SetCerveau(Brain *oth);
		void makeSound() const;
	private	:
	Brain *cerveau;
};

#endif
