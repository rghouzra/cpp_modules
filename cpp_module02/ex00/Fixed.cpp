#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout  <<"Constructor called\n";
	value = 0;
}


Fixed::Fixed(const Fixed &o){
	std::cout  <<"copy constructor called\n";
	*this = o;
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