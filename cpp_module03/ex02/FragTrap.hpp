#ifndef _FragTrap_HPP_
#define _FragTrap_HPP_

#include <iostream>

#include  "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
	public	:
		FragTrap ();
		FragTrap (const std::string &_name);
		FragTrap (FragTrap const &obj);
		~FragTrap ();
		FragTrap &operator= (const FragTrap &obj);
		void highFivesGuys(void);
	private	:
		//	DataType	attributes.
};


#endif
