#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{

	private:

		int 				integer;
		static const int 	bits = 8;

	public:

		Fixed();
		Fixed( const Fixed& copy );
		~Fixed();

		Fixed& operator=(const Fixed& ope);
		int 				getRawBits(void) const;
		void 				setRawBits(int const raw);
};

#endif