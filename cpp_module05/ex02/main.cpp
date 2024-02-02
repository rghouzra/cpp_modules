//
// Created by reda ghouzraf on Wed Jan 24 02:54:08 2024
//
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

void test(int16_t a){
	ShrubberyCreationForm derived("form");
	AForm &base = derived;
	Bureaucrat bur(a);

	// bur.executeForm(base);
	base.beSigned(bur);
	if(base.execute(bur))
		std::cout << "executed\n";
	// AForm *ptr = new  Prs
}


int main(){
	try{

		test(1);
		std::cout << "\n----\n";
		test(9);
		std::cout << "\n----\n";
		test(151);
		std::cout << "\n----\n";
	}
	catch(std::exception &e){
		std::cerr << e.what();	
	}
	// test(151);
	// test(1);
}
