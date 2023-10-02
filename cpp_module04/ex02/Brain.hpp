#ifndef Brain_HPP
#define Brain_HPP

#include <iostream>
#define NB_OF_IDEAS 5

class	Brain
{
	public	:
		Brain ();
		Brain (Brain const &obj);
		~Brain ();
		Brain &operator= (const Brain &obj);
		std::string getideas(size_t index) const;
		void setideas(const std::string *oth);
	private	:
		std::string ideas[100];
		
};

#endif
