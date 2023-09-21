#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
private:
	int32_t value;
	static const int nb_fract_bits = 8;
public:
	Fixed(/* args */);
	int getFracBits();
	void setTheValue(const int32_t &val);
	void operator=(const Fixed &o);
	~Fixed();
};

#endif