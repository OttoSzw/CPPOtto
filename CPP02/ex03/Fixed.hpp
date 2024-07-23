#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <math.h>

class Fixed
{

	private:

		int 				integer;
		static const int 	bits = 8;

	public:

		Fixed();
		Fixed( const Fixed& copy );
		Fixed( const int i);
		Fixed( const float f);
		~Fixed();

		float	toFloat( void ) const;
		int		toInt( void ) const;
		int 				getRawBits(void) const;
		void 				setRawBits(int const raw);
		Fixed& operator=(const Fixed& ope);

		bool operator>(const Fixed& ope);
		bool operator<(const Fixed& ope);
		bool operator>=(const Fixed& ope);
		bool operator<=(const Fixed& ope);
		bool operator==(const Fixed& ope);
		bool operator!=(const Fixed& ope);

		Fixed operator+(const Fixed& ope);
		Fixed operator-(const Fixed& ope);
		Fixed operator*(const Fixed& ope);
		Fixed operator/(const Fixed& ope);

		Fixed operator--();
		Fixed operator--(int);
		Fixed operator++();
		Fixed operator++(int);

		static Fixed const &min(Fixed const &a, Fixed const &b);
		static Fixed const &max(Fixed const &a, Fixed const &b);
		static Fixed &min(Fixed &a, Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
};

std::ostream& operator<<(std::ostream &stream, Fixed const &fixed);
#endif