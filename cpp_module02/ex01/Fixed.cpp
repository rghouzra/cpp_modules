#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout  <<"Constructor called\n";
	value = 0;
}


Fixed::Fixed(const Fixed &o){
	std::cout  <<"copy constructor called\n";
	*this = o;
}


Fixed::Fixed(int i_in){
	(void)i_in;
}


Fixed::Fixed(float f_in){
	float calc;

	calc = f_in  * (1 << nb_fract_bits);
	value = roundf(calc);
}

int Fixed::getFracBits(){
	return nb_fract_bits;
}


void Fixed::setRawBits(int const raw){
	value = raw;
}

int Fixed::getRawBits(void)const{
	std::cout  <<"getRaw called\n";
	return value;
}

void Fixed::operator=(const Fixed &o) {
	std::cout  <<"copy assignment op called\n";
	value = o.getRawBits();
}

Fixed::~Fixed(){
	std::cout  <<"destructor called\n";
}