//
// Created by reda ghouzraf on Wed Jan 24 02:54:08 2024
//
#include "Bureaucrat.hpp"
#include <iostream>



int main(){
	Bureaucrat a;
	try {
		a.setGrade(0);
		std::cout << a.getGrade() << '\n';
	}
	catch (std::exception &e){
		std::cout << e.what();
	}
}
