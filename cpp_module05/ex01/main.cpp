//
// Created by reda ghouzraf on Wed Jan 24 02:54:08 2024
//
#include "Bureaucrat.hpp"
#include <iostream>


void test(int16_t a){

	Bureaucrat bur;
	try{
		bur.setGrade(a);
		std::cout << bur << '\n';

		bur.decrementGrade();
		std::cout << bur << '\n';
	}
	catch(std::exception &e){
		std::cout << e.what() << '\n';
	}
	// catch(int a){
	// 	std::cout << e.what() << '\n';
	// }
}


int main(){
	test(0);
	test(150);
	// test(151);
	// test(1);
}
