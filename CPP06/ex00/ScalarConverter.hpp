#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <limits.h>

enum e_type
{
	NONE = 0,
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
};

class ScalarConverter
{
	private:

		ScalarConverter();
		ScalarConverter(const ScalarConverter &copy);
		ScalarConverter &operator=(const ScalarConverter &ope);

	public:

		~ScalarConverter();

		static void convert(const std::string &literal);
};

#endif
