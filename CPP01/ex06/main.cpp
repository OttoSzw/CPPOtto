#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl harl;
	std::string line;

	if (av[1])
		line = av[1];
	if (ac != 2)
	{

		std::cout << "Number of arg not valid!" << std::endl;
		return (1);
	}
	else if (line.compare("DEBUG") == 0 || line.compare("INFO") == 0 || line.compare("WARNING") == 0 || line.compare("ERROR") == 0)
	{
		std::cout << std::endl;
		harl.complain(line);
		std::cout << std::endl;
	}
	else
	{
		std::cout << "Not a valid identifier!" << std::endl;
		return (1);
	}
	return (0);
}