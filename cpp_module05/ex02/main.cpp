//
// Created by reda ghouzraf on Wed Jan 24 02:54:08 2024
//
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

void test(int16_t a){
	Form f(10, 10);
	Bureaucrat b(a);
	f.beSigned(b);
	b.signForm(f);
}


int main(){
	try{

		test(1);
		std::cout << "\n----\n";
		test(9);
		std::cout << "\n----\n";
		test(150);
		std::cout << "\n----\n";
	}
	catch(std::exception &e){
		std::cerr << e.what();	
	}
	// test(151);
	// test(1);
}
