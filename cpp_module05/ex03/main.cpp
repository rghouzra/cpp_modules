//
// Created by reda ghouzraf on Wed Jan 24 02:54:08 2024
//
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include <iostream>

void test(int16_t a){
	ShrubberyCreationForm derived("form");
	AForm &base = derived;
	Bureaucrat bur(a);

	// bur.executeForm(base);
	base.beSigned(bur);
	if(base.execute(bur))
		std::cout << "executed\n";
	Intern intern;
	AForm *p = intern.makeForm("robotomy request", "target");
	delete p;
	// AForm *ptr = new  Prs
}


void func_(){
	system("leaks Bureaucrat");
}

int main(){
	atexit(func_);
	try{
		test(1);
		std::cout << "\n----\n";
		test(9);
		std::cout << "\n----\n";
		test(151);
		std::cout << "\n----\n";
	}
	catch(std::exception &e){
		std::cerr << e.what() <<'\n';	
	}
	// test(151);
	// test(1);
}
