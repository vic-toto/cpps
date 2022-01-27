#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    storage = 0;
}

Fixed::~Fixed()
{
    std::cout << "Default deconstructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed::Fixed(int fixed)
{
    std::cout << "Int constructor called" << std::endl;
    storage = (fixed << bitSize);
}

Fixed::Fixed(float fixed)
{
    std::cout << "Float constuctor called" << std::endl;
    storage = roundf(fixed * (1 << bitSize));
}

Fixed & Fixed::operator = (const Fixed &fixed)
{
    std::cout << "Assignment operator called" << std::endl;
    this->storage = fixed.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    return (this->storage);
}

void    Fixed::setRawBits(int const raw)
{
    this->storage = raw;
}

int     Fixed::toInt(void) const
{
    return (storage >> bitSize);
}

float 	Fixed::toFloat( void ) const
{
    return ((float)storage / (1 << bitSize));
}

std::ostream& operator<<(std::ostream & os, Fixed const & i)
{
	return(os << (i.toFloat()));
}
