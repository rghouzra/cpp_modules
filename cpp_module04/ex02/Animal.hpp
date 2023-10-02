#ifndef _Animal_HPP_
#define _Animal_HPP_

#include <iostream>

class	Animal
{
	public	:
	/***************************/
		Animal ();
		Animal (Animal const &obj);
		virtual ~Animal ();
		Animal &operator= (const Animal &obj);
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
