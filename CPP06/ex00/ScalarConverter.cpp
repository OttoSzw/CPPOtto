#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << "Hii i'm ScalarConverter Constructor" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
	*this = copy;
	std::cout << "Hii i'm Copy ScalarConverter Constructor" << std::endl;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &ope)
{
	(void)ope;
	return (*this);
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "Byeee i'm ScalarConverter Destructor" << std::endl;
}

static bool tryConvertToInt(const std::string &s)
{
	int i = 0;
	if (s[i] == '-' || s[i] == '+')
		i++;
	for (size_t j = i; j < s.length(); j++)
	{
		if (!std::isdigit(s[j]))
			return (false);
	}
	return (true);
	
}

static bool tryConvertToFloat(const std::string &s)
{
	int i = 0;
	if (s.find('.') == 0 || s.find('.') == std::string::npos || s[s.length() - 1] != 'f')
	{
		return (false);
	}
	if (s[i] == '-' || s[i] == '+')
		i++;
	for (size_t j = i; j < s.length(); j++)
	{
		if (s[j] == '.')
			j++;
		if (!std::isdigit(s[j]) && s[j] != 'f')
			return (false);
	}
	return (true);
}

static bool tryConvertToDouble(const std::string &s)
{
	int i = 0;
	if (s.find('.') == 0 || s.find('.') == std::string::npos)
	{
		return (false);
	}
	if (s[i] == '-' || s[i] == '+')
		i++;
	for (size_t j = i; j < s.length(); j++)
	{
		if (s[j] == '.')
			j++;
		if (!std::isdigit(s[j]))
			return (false);
	}
	return (true);
}

e_type find_type(const std::string &literal, char *c, int *i, float *f, double *d)
{
	if (literal.length() == 1 && std::isprint(literal[0]))
	{
		*c = literal[0];
		return (CHAR);
	}
	else if (tryConvertToInt(literal))
	{
		*i = std::atoi(literal.c_str());
		return (INT);
	}
	else if (tryConvertToFloat(literal))
	{
		return (FLOAT);
	}
	else if (tryConvertToDouble(literal))
	{
		return (DOUBLE);
	}
	else
	{
		return (NONE);
	}
}

void	print_convert_types(e_type Type, char c, int i, float f, double d)
{
	(void)Type;
	std::cout << "char : " << c << std::endl;
	std::cout << "int : " << i << std::endl;
	std::cout << "float : " << f << std::endl;
	std::cout << "double : " << d << std::endl;
}

void ScalarConverter::convert(const std::string &literal)
{
	char c = '\0';
	int i = 0;
	float f = 0;
	double d = 0;
	e_type Type = NONE;

	Type = find_type(literal, &c, &i, &f, &d);
	if (Type == NONE)
		std::cout << "Impossible conversion !!" << std::endl;
	else
	{
		std::cout << "Type Find : " << Type << std::endl;
	}
	print_convert_types(Type, c, i, f, d);
}