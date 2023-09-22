#include "Fixed.hpp"

int main( void ) {
	float a = 3.14;

	
	Fixed o(a);
	int integervalue ;
	// std::memcpy(&integervalue, &a, sizeof(float));
	// std::bitset< 8 *sizeof(float)> b(integervalue);
	// std::bitset< 8 *sizeof(float)> b2(o.getRawBits());
	// std::cout << b <<"\n";
	// std::cout << b2 <<"\n";
	// std::cout << o.getRawBits() << "\n";
}
