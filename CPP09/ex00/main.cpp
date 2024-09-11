#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	BitcoinExchange Instance;
	if (ac != 2)
	{
		std::cout << "Error: could not open file." << std::endl;
	}
	else
	{
		std::ifstream fichier("data.csv");

		if (!fichier.is_open())
		{
			std::cerr << "Error: Could not find or open file 'data.csv'" << std::endl;
			return 1;
		}
		std::cout << "Valid : open file 'data.csv'" << std::endl;
		std::cout << "Prepare file : " << av[1] << std::endl;
		std::string line;
		getline(fichier, line);
		while (getline(fichier, line))
		{
			size_t position = line.find(",");
			std::cout << line << std::endl;
			Instance.key = line.substr(0, position);
			std::cout << "Key :       " << Instance.key << std::endl;
			Instance.value = stod(line.substr(position + 1, line.size()));
			std::cout << "Value :       " << Instance.value << std::endl;
			Instance.db[Instance.key] = Instance.value;
		}
		fichier.close();
	}
	return (0);
}