//
// Created by reda ghouzraf on Wed Jan 24 02:54:08 2024
//
#include "Bureaucrat.hpp"

int main()
{
    try
	{
		std::exception e;
		throw e ;
	}
	catch (int a){
		std::cout << a;
	}
	catch (std::exception e){
		std::cout << e.what();
	}
    return 0;
}
