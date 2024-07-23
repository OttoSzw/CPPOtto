#include "Fixed.hpp"

Fixed::Fixed() : integer(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	// setRawBits(copy.getRawBits());
	*this = copy;
}

Fixed::Fixed( const int i)
{
	std::cout << "Int constructor called" << std::endl;
	integer = (i << bits);
}

Fixed::Fixed( const float f)
{
	std::cout << "Float constructor called" << std::endl;
	integer = roundf(f * (1 << bits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}


Fixed&	Fixed::operator=(const Fixed& ope)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(ope.getRawBits());
	return (*this);
}

float	Fixed::toFloat( void ) const
{
	return ((float)integer / (1 << bits));
}

int		Fixed::toInt( void ) const
{
	return (integer >> bits);
}

int	Fixed::getRawBits() const
{
	return (integer);
}

void Fixed::setRawBits(int const raw)
{
	integer = raw;
}

std::ostream&	operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return (os);
}