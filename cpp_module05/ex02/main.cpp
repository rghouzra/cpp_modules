//
// Created by reda ghouzraf on Wed Jan 24 02:54:08 2024
//
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <iostream>

void test(int16_t a){
	
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
