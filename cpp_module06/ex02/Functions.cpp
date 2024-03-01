#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void identify(Base* p){
	if(!p)
		return ;
	if(dynamic_cast<A*> (p))
	{
		std::cout <<  "type is A\n";
	}
	if(dynamic_cast<B*> (p))
	{
		std::cout <<  "type is B\n";
	}
	if(dynamic_cast<C*> (p))
	{
		std::cout <<  "type is C\n";
	}
}

//std::bad_cast
void identify(Base& p){
	const char *exception ="std::bad_cast";
	try{
		A &ref = dynamic_cast<A&>(p);
		(void)ref;
		std::cout << "type is A\n";
	}
	catch(std::exception &e){
		try{
			if(e.what() ==exception)
			{
				B &ref = dynamic_cast<B&>(p);
						(void)ref;
				std::cout << "type is B\n";
			}
		}
		catch(std::exception &e){
			try{
				if(e.what() ==exception)
				{
					C &ref = dynamic_cast<C&>(p);
					(void)ref;
					std::cout << "type is C\n";
				}
			}
			catch(std::exception &e){
				std::cout << e.what() << '\n';
			}
		}
	}
}

Base * generate(void){
	static int i = 0;
	Base *p = NULL;
	if(i < 2){
		std::cout << "gen A\n";
		 p = new A;
	}
	else if(i < 4){
		std::cout << "gen B\n";
		p = new B;
	}
	else{
		std::cout << "gen C\n";
		p = new C;
		i = 0;
	}
	i++;
	return p;
}
