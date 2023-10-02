#ifndef Dog_HPP
#define Dog_HPP

#include "Brain.hpp"
#include "AAnimal.hpp"
class	Dog : public AAnimal
{
	public	:
		Dog ();
		Dog (Dog const &obj);
		~Dog ();
		Dog &operator= (const Dog &obj);
		/*****************/
		void makeSound() const;
		Brain *GetCerveau() const;
		void SetCerveau(Brain *oth);
	private	:
	Brain *cerveau;
};

#endif
