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
	/*******************************/
	Fixed();
	Fixed(int i_in);
	Fixed(float f_in);
	Fixed (const Fixed &o);
	~Fixed();
	/*******************************/
	/*assign*/
	void operator=(const Fixed &o);
	/*bool*/
	bool operator>(const Fixed &o);
	bool operator<(const Fixed &o);
	bool operator>=(const Fixed &o);
	bool operator<=(const Fixed &o);
	bool operator==(const Fixed &o);
	bool operator!=(const Fixed &o);
	/*arithmetic*/
	Fixed operator+(const Fixed &o);
	Fixed operator-(const Fixed &o);
	Fixed operator*(const Fixed &o);
	Fixed operator/(const Fixed &o);
	/*inc/dec*/
	Fixed operator++();
	Fixed operator--();
	Fixed operator++(int);
	Fixed operator--(int);
	/***********************/

	const Fixed &max(const Fixed &left, const Fixed &right);
	const Fixed &min(const Fixed &left, const Fixed &right);
	Fixed &max(Fixed &left, Fixed &right);
	Fixed &min(Fixed &left, Fixed &right);

	/******************************/
	int toInt( void ) const;
	float toFloat( void ) const;
	int getFracBits();
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};
std::ostream& operator<<(std::ostream &os, const Fixed &n);
#endif