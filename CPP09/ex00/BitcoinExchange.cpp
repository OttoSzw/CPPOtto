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
			this->value = atof((line.substr(position + 1, line.size())).c_str());
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
		std::map<std::string, double> Tc;
		double valeur;

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
		
		getline(fichier, line);
		while (getline(fichier, line))
		{
			if (line.size() == 0)
				std::cout << "Error: Empty line" << std::endl;
			else
			{
				size_t position = line.find(" | ");
				cle = line.substr(0, position);
				valeur = atof((line.substr(position + 3, line.size())).c_str());
				Tc[cle] = valeur;
				int flag = OnCheckCaEnBienn(cle, valeur);
				if (db.find(cle) != db.end() && flag != 1)
				{
					double result;

					result = Tc[cle] * db[cle];
					std::cout << cle << " => " << Tc[cle] << " = " << result << std::endl;
				}
				else if (flag != 1)
				{
					std::string nearestDate = FindNearest(db, cle);
					double result;
					result = Tc[cle] * db[nearestDate];
					std::cout << cle << " => " << Tc[cle] << " = " << result << std::endl;
				}
			}
		}
		fichier.close();
}

int	BitcoinExchange::OnCheckCaEnBienn(std::string date, double value)
{
	double year;
	double month;
	double day;

	year = atof((date.substr(0, 4)).c_str());
	month = atof((date.substr(5, 7)).c_str());
	day = atof((date.substr(8, 10)).c_str());

	if (year > 2022 || year < 2009)
	{
		std::cout << "Error: bad input: Not valid year for bitcoin." << std::endl;
		return (1);
	}
	else if ((month > 12 ||  month < 1) || (day > 31 || day < 1))
	{
		std::cout << "Error: Not a valid month|day." << std::endl;
		return (1);
	}
	else if (value > 1000)
	{
		std::cout << "Error: Too large number." << std::endl;
		return (1);
	}
	else if (value < 0)
	{
		std::cout << "Error: Not a positive number." << std::endl;
		return (1);
	}
	return (0);
}

std::string BitcoinExchange::FindNearest(std::map<std::string, double> map, std::string date)
{
	std::map<std::string, double>::reverse_iterator it = map.rbegin();
	while (it != map.rend())
	{
        if (strcmp(it->first.c_str(), date.c_str()) <= 0)
			return (it->first);
		++it;
	}
	return (NULL);
}