#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
private:
	uint32_t value;
	static int nb_fract_bits;
public:
	Fixed(/* args */);
	void operator=(const Fixed &o);
	~Fixed();
};

#endif