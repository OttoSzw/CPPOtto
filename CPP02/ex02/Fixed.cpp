#include "Fixed.hpp"

Fixed::Fixed() : integer(0)
{
}

Fixed::Fixed( const Fixed& copy)
{
	// setRawBits(copy.getRawBits());
	*this = copy;
}

Fixed::Fixed( const int i)
{
	integer = (i << bits);
}

Fixed::Fixed( const float f)
{
	integer = roundf(f * (1 << bits));
}

Fixed::~Fixed()
{
}


Fixed&	Fixed::operator=(const Fixed& ope)
{
	this->setRawBits(ope.getRawBits());
	return (*this);
}

float	Fixed::toFloat( void ) const
{
	return ((float)this->integer / (1 << bits));
}

int		Fixed::toInt( void ) const
{
	return (this->integer >> bits);
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

// New ex02

bool	Fixed::operator>(const Fixed& ope)
{
	if (this->integer > ope.getRawBits())
		return (1);
	return (0);
}

bool	Fixed::operator<(const Fixed& ope)
{
	if (this->integer < ope.getRawBits())
		return (1);
	return (0);
}

bool	Fixed::operator>=(const Fixed& ope)
{
	if (this->integer >= ope.getRawBits())
		return (1);
	return (0);
}

bool	Fixed::operator<=(const Fixed& ope)
{
	if (this->integer <= ope.getRawBits())
		return (1);
	return (0);
}

bool	Fixed::operator==(const Fixed& ope)
{
	if (this->integer == ope.getRawBits())
		return (1);
	return (0);
}

bool	Fixed::operator!=(const Fixed& ope)
{
	if (this->integer != ope.getRawBits())
		return (1);
	return (0);
}

Fixed Fixed::operator+(const Fixed& ope)
{
	this->integer += ope.getRawBits();
	return (*this);
}

Fixed Fixed::operator-(const Fixed& ope)
{
	this->integer -= ope.getRawBits();
	return (*this);
}

Fixed Fixed::operator*(const Fixed& ope)
{
	this->integer = (this->toFloat() * ope.toFloat() * (1 << bits));
	return (*this);
}

Fixed Fixed::operator/(const Fixed& ope)
{
	this->integer = (this->toFloat() / ope.toFloat() * (1 << bits));
	return (*this);
}

Fixed Fixed::operator--()
{
	this->integer--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	this->integer--;
	return (temp);
}

Fixed Fixed::operator++()
{
	this->integer++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	this->integer++;
	return (temp);
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}
