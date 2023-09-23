#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout  <<"Constructor called\n";
	value = 0;
}

int Fixed::toInt( void ) const{
	
	return value >> nb_fract_bits;
}

float Fixed::toFloat( void ) const{
	float a;
	
	a = value;

	return (a / (1 << nb_fract_bits));
}


Fixed::Fixed(const Fixed &o){
	std::cout  <<"copy constructor called\n";
	*this = o;
}

Fixed::Fixed(int i_in){
	std::cout <<"int constructor has been called\n";

	value  = (i_in << nb_fract_bits);
}

Fixed::Fixed(float f_in){
	std::cout <<"float constructor has been called\n";
	
	value = roundf(f_in * (1 << nb_fract_bits));
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

std::ostream& operator<<(std::ostream &os, const Fixed &n){
	os << n.toFloat();
	return os;
}

Fixed::~Fixed(){
	std::cout  <<"destructor called\n";
}