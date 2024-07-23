#include "Sed.hpp"

int	main(int ac, char **av)
{
	Sed instance;

	if (ac != 4)
	{
		std::cout << "Number of arg is not good !" << std::endl;
		return (1);
	}
	else
	{
		if (instance.replace_text(av) == 1)
			return (1);
	}
	return (0);
}