#ifndef _Animal_HPP_
#define _Animal_HPP_

#include <iostream>

class	AAnimal
{
	public	:
	/***************************/
		AAnimal ();
		AAnimal (AAnimal const &obj);
		virtual ~AAnimal ();
		AAnimal &operator= (const AAnimal &obj);
	/***************************/
	void settype(const std::string &oth);
	std::string getType(void) const;
	/**************************/
	virtual void makeSound()const;
	/******************************/
	protected	:
		std::string type;
};

#endif
