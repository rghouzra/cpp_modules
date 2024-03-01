#ifndef BASE_HPP
#define BASE_HPP
#include <iostream>
#define IS_EQUAL(x,y)(strcmp(x, y) == 0)
class Base{
	public:
		virtual ~Base();
};
Base * generate(void);
void identify(Base* p);
void identify(Base& p);
#endif
