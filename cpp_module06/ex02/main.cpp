#include "Base.hpp"


int main()
{
	/* code */
	int i = 10;
	while (i--)
	{
		Base *p = generate();
		identify(*p);
		delete p;
		/* code */
	}

	return 0;
}
