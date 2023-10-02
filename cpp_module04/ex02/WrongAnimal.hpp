#ifndef WrongAnimal_HPP
#define WrongAnimal_HPP

#include <iostream>

class	WrongAnimal
{
	public	:
	/***************************/
		WrongAnimal ();
		WrongAnimal (WrongAnimal const &obj);
		~WrongAnimal ();
		WrongAnimal &operator= (const WrongAnimal &obj);
	/***************************/
	void settype(const std::string &oth);
	std::string getType(void) const;
	/**************************/
	void makeSound()const;
	/******************************/
	protected	:
		std::string type;
};

#endif
