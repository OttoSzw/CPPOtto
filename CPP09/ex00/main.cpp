#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Error: could not open file." << std::endl;
	}
	else
	{
		try
		{
			BitcoinExchange Instance;
			std::ifstream fichier(av[1]);
			if (!fichier.is_open())
			{
			throw CantOpen();
			}
			Instance.OttoFaisTout(fichier);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << "\n\n";
		}
		
	}
	return (0);
}