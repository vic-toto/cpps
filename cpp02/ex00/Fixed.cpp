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

Fixed::Fixed(Fixed &fixed)
{
    std::cout << "Second constructor called" << std::endl;
    *this = fixed;
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
