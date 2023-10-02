#ifndef Animal_HPP
#define Animal_HPP

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
	virtual void makeSound()const = 0;
	/******************************/
	protected	:
		std::string type;
};

#endif
