#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <fstream>
#include <algorithm>
#include <string>

class BitcoinExchange 
{
	// private:
	public:

		std::string key;
		std::string value;
		std::map<std::string, double> db;
};

#endif