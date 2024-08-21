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
		*i = atoi(literal.c_str());
		return (INT);
	}
	else if (tryConvertToFloat(literal))
	{
		*f = atof(literal.c_str());
		return (FLOAT);
	}
	else if (tryConvertToDouble(literal))
	{
		*d = atof(literal.c_str());
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
	if (Type == CHAR)
	{
		std::cout << "char : " << c << std::endl;
		std::cout << "int : " << static_cast<int>(c) << std::endl;
		std::cout << "float : " << static_cast<float>(c) << ".0f" << std::endl;
		std::cout << "double : " << static_cast<double>(c) << ".0" << std::endl;
	}
	else if (Type == INT)
	{
		if (std::isprint(static_cast<char>(i)) && i >= 0 && i < 127 )
            std::cout << "char: " << static_cast<char>(i) << std::endl;
        else
            std::cout << "char: impossible" << std::endl;
		std::cout << "int : " << i << std::endl;
		std::cout << "float : " << static_cast<float>(i) << ".0f" << std::endl;
		std::cout << "double : " << static_cast<double>(i) << ".0" << std::endl;
	}
	else if (Type == FLOAT)
	{
		if (std::isprint(static_cast<char>(f)))
            std::cout << "char: " << static_cast<char>(f) << std::endl;
        else
            std::cout << "char: impossible" << std::endl;	
		std::cout << "int : " << static_cast<int>(f) << std::endl;
		std::cout << "float : " << f << ".0f" << std::endl;
		std::cout << "double : " << static_cast<double>(f) << ".0" << std::endl;
	}
	else if (Type == DOUBLE)
	{
		if (std::isprint(static_cast<char>(d)))
            std::cout << "char: " << static_cast<char>(d) << std::endl;
        else
            std::cout << "char: impossible" << std::endl;	
		std::cout << "int : " << static_cast<int>(d) << std::endl;
		std::cout << "double : " << static_cast<float>(d) << ".0f" << std::endl;
		std::cout << "float : " << d << ".0" << std::endl;
	}
	else
	{
		return ;
	}
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
		print_convert_types(Type, c, i, f, d);
	}
}