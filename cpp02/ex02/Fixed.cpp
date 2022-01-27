#include "Fixed.hpp"

Fixed::Fixed()
{
    storage = 0;
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed &fixed)
{
    *this = fixed;
}

Fixed::Fixed(int fixed)
{
    storage = (fixed << bitSize);
}

Fixed::Fixed(float fixed)
{
    storage = roundf(fixed * (1 << bitSize));
}

Fixed & Fixed::operator = (const Fixed &fixed)
{
    storage = fixed.getRawBits();
    return (*this);
}

Fixed Fixed::operator + (const Fixed &fixed)
{
    Fixed ret;

    ret.setRawBits(storage + fixed.storage);
    return (ret);
}

Fixed Fixed::operator - (const Fixed &fixed)
{
    Fixed ret;

    ret.setRawBits(storage - fixed.storage);
    return (ret);
}

Fixed Fixed::operator * (const Fixed &fixed)
{
    Fixed ret;

    ret.setRawBits(((storage >> 0) * (fixed.storage >> 0)) >> 8);
    return (ret);
}

Fixed Fixed::operator/ (const Fixed &fixed)
{
	Fixed ret(this->toFloat() / fixed.toFloat());
	return(ret);
}

Fixed & Fixed::operator++ () //++a
{
	storage++;
	return(*this);
}

Fixed Fixed::operator++ (int) //a++
{
	Fixed temp(*this);
	++*this;
	return(temp);
}

Fixed & Fixed::operator-- () //--a
{
	storage--;
	return(*this);
}

Fixed Fixed::operator-- (int) //a--
{
	Fixed temp(*this);
	--*this;
	return(temp);
}

bool Fixed::operator== (const Fixed &fixed)
{
	return(storage == fixed.storage && bitSize == fixed.bitSize );
}

bool Fixed::operator<= (const Fixed &fixed)
{
	return(storage <= fixed.storage);
}

bool Fixed::operator< (const Fixed &fixed)
{
	return(storage < fixed.storage);
}

bool Fixed::operator> (const Fixed &fixed)
{
	return(storage > fixed.storage);
}

bool Fixed::operator>= (const Fixed &fixed)
{
	return(storage >= fixed.storage);
}

bool Fixed::operator!= (const Fixed &fixed)
{
	return(storage != fixed.storage|| bitSize != fixed.bitSize);
}

Fixed & Fixed::max(Fixed &a, Fixed &b)
{
	return(a.storage  > b.storage  ? a : b);
}

Fixed & Fixed::min(Fixed &a, Fixed &b)
{
	return(a.storage < b.storage  ? a : b);
}

const Fixed & Fixed::max(Fixed const &a, Fixed const &b)
{
	return(a.storage > b.storage  ? a : b);
}

const Fixed & Fixed::min(Fixed const &a, Fixed const &b)
{
	return(a.storage < b.storage  ? a : b);
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
