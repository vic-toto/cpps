#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Fixed
{
private:
	int					storage;
	static int const	bitSize = 8;
public:
	Fixed();
	~Fixed();
	Fixed(Fixed &fixed);
	Fixed& operator=(const Fixed & fixed);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif