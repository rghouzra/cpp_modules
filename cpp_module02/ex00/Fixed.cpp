#include "Fixed.hpp"

Fixed::Fixed(){
	value = 0;
}

void Fixed::operator=(const Fixed &o){
	value = o.value;
}


int Fixed::getFracBits(){
	return nb_fract_bits;
}
void Fixed::setTheValue(const int32_t &val){
	value = val;
}

Fixed::~Fixed(){
	//des
}