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
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float 	toFloat( void ) const;
	int 	toInt( void ) const;

	Fixed& operator= (const Fixed &fixed);
	Fixed operator+ (const Fixed &fixed);
	Fixed operator- (const Fixed &fixed);
	Fixed operator* (const Fixed &fixed);
	Fixed operator/ (const Fixed &fixed);
	Fixed& operator++ (void);
	Fixed operator++ (int);
	Fixed& operator-- (void);
	Fixed operator-- (int);
	bool operator== (const Fixed &fixed);
	bool operator<= (const Fixed &fixed);
	bool operator< (const Fixed &fixed);
	bool operator>= (const Fixed &fixed);
	bool operator> (const Fixed &fixed);
	bool operator!= (const Fixed &fixed);

	static Fixed & max(Fixed &a, Fixed &b);
	static Fixed & min(Fixed &a, Fixed &b);
	static const Fixed & max(Fixed const &a, Fixed const &b);
	static const Fixed & min(Fixed const &a, Fixed const &b);
};

std::ostream& operator<< (std::ostream & os, Fixed const & i);

#endif