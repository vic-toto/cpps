#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>

class Fixed
{
private:
	int					storage;
	static int const	bitSize = 8;
public:
	Fixed();
	~Fixed();
	Fixed(int fix);
	Fixed(float fix);
	Fixed(const Fixed &fixed);
	Fixed& operator=(const Fixed & fixed);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float 	toFloat( void ) const;
	int 	toInt( void ) const;
};

std::ostream& operator<< (std::ostream & os, Fixed const & i);

#endif