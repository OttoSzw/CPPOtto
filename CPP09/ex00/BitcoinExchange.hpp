#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <fstream>
#include <algorithm>
#include <string>


class CantOpen : public std::runtime_error
{
	public:

		CantOpen() : std::runtime_error("\033[5;31m            ERROR: COULD NOT OPEN FILE.\033[0m") {}
};

class BitcoinExchange 
{
	// private:
	public:

		std::string key;
		std::string value;
		std::map<std::string, std::string> db;

		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& copy);
		BitcoinExchange	&operator=(const BitcoinExchange& ope);
		~BitcoinExchange();

		void	OttoFaisTout(std::ifstream& name);
};

#endif