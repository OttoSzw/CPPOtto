#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	try
	{
		std::ifstream fichier("data.csv");

		if (!fichier.is_open())
		{
			throw CantOpen();
		}
		std::string line;
		getline(fichier, line);
		while (getline(fichier, line))
		{
			size_t position = line.find(",");
			this->key = line.substr(0, position);
			this->value = line.substr(position + 1, line.size());
			this->db[this->key] = this->value;
		}

		std::cout << std::endl;
		std::cout << "\033[1;32m";
		std::cout << "      💚   CONSTRUCTOR INITIALIZE DATABASE  💚      " << std::endl;
		std::cout << std::endl;
		std::cout << "\033[0m";
		std::cout << "  - Key : ";
		std::cout << "\033[5;32m";
		std::cout << "[Ready]";
		std::cout << "\033[0m" << std::endl;
		std::cout << "  - Value : ";
		std::cout << "\033[5;32m";
		std::cout << "[Ready]";
		std::cout << "\033[0m" << std::endl;
		std::cout << "  - DataBase :";
		std::cout << "\033[5;32m";
		std::cout << "[Ready]";
		std::cout << "\033[0m" << std::endl;
		std::cout << std::endl;
		fichier.close();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& copy)
{
	*this = copy;
}

BitcoinExchange	&BitcoinExchange::operator=(const BitcoinExchange& ope)
{
	if (this != &ope)
	{
		this->db = ope.db;
		this->key = ope.key;
		this->value = ope.value;
	}
	return (*this);
}

BitcoinExchange::~BitcoinExchange()
{

}

void	BitcoinExchange::OttoFaisTout(std::ifstream& fichier)
{
		std::cout << "\033[1;35m";
		std::cout << "          Entering into : 'OttoFaisTout'" << std::endl;
		std::cout << "\033[0m";
		std::string line;
		std::string cle;
		std::map<std::string, std::string> Tc;
		std::string valeur;

		getline(fichier, line);
		while (getline(fichier, line))
		{
			size_t position = line.find("|");
			cle = line.substr(0, position);
			valeur = line.substr(position + 1, line.size());
			Tc[cle] = valeur;
		}

		std::cout << std::endl;
		std::cout << "  - Cle : ";
		std::cout << "\033[5;35m";
		std::cout << "[Ready]";
		std::cout << "\033[0m" << std::endl;
		std::cout << "  - Valeur : ";
		std::cout << "\033[5;35m";
		std::cout << "[Ready]";
		std::cout << "\033[0m" << std::endl;
		std::cout << "  - ToCompare :";
		std::cout << "\033[5;35m";
		std::cout << "[Ready]";
		std::cout << "\033[0m" << std::endl;
		std::cout << std::endl;
		fichier.close();

		

}