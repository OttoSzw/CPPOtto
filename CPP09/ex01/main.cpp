#include "RPN.hpp"
#include <cstdlib>

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		return (1);
	}
	try
	{
		RPN Instance(av[1]);
		Instance.CalculReversePolishNotation();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}