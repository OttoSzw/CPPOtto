#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <fstream>
#include <algorithm>
#include <cstring>
#include <cctype>


class CantOpen : public std::runtime_error
{
	public:

		CantOpen() : std::runtime_error("\033[5;31m            ERROR: COULD NOT OPEN FILE.\033[0m") {}
};

class BitcoinExchange 
{
	public:

		std::string key;
		double value;
		std::map<std::string, double> db;

		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& copy);
		BitcoinExchange	&operator=(const BitcoinExchange& ope);
		~BitcoinExchange();

		void	OttoFaisTout(std::ifstream& name);
		int		OnCheckCaEnBienn(std::string date, double value);
		std::string FindNearest(std::map<std::string, double>, std::string date);
};

#endif