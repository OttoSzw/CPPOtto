#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
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
	// static bool tryConvertToInt(const std::string &s);
	// static bool tryConvertToFloat(const std::string &s);
	// static bool tryConvertToDouble(const std::string &s);

	static void convert(const std::string &literal);
};

#endif
