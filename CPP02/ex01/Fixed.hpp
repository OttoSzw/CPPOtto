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

		Fixed& operator=(const Fixed& ope);
		float	toFloat( void ) const;
		int		toInt( void ) const;
		int 				getRawBits(void) const;
		void 				setRawBits(int const raw);
};

std::ostream& operator<<(std::ostream &stream, Fixed const &fixed);
#endif