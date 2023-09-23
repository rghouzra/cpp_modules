#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
private:
	int value;
	static const int nb_fract_bits = 8;
public:
	Fixed();
	Fixed(int i_in);
	Fixed(float f_in);
	Fixed (const Fixed &o);
	~Fixed();

	void operator=(const Fixed &o);
	int toInt( void ) const;
	float toFloat( void ) const;
	int getFracBits();
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};
std::ostream& operator<<(std::ostream &os, const Fixed &n);
#endif