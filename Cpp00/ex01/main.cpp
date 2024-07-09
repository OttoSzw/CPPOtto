#include "PhoneBook.hpp"
#include <iostream>
#include <cstdlib>
#include <sstream>

void ft_put_contact(PhoneBook Instance, int i)
{
	std::cout << "  -  Firstname |  Lastname  |  Nickname  |   PhoneNb  |   Secret   |" << std::endl;
	std::cout << i << " - " << Instance.cont[i - 1].First_name << " | "
			  << Instance.cont[i - 1].Last_name << " | "
			  << Instance.cont[i - 1].Nickname << " | "
			  << Instance.cont[i - 1].Phone_number << " | "
			  << Instance.cont[i - 1].Darkest_secret << " | " << std::endl;
	std::cout << std::endl;
}

int print_tab(PhoneBook Instance, int max)
{
	if (!max)
		return 1;
	std::cout << "List of Contacts :" << std::endl;
	for (int i = 1; i <= max; ++i)
	{
		std::cout << i << " - " << Instance.cont[i - 1].First_name << " | "
				  << Instance.cont[i - 1].Last_name << " | "
				  << Instance.cont[i - 1].Nickname << " | " << std::endl;
	}
	return 0;
}

int convert_string_to_int(std::string str)
{
	int n;

	std::istringstream iss(str);

	iss >> n;
	return (n);
}

int main()
{
	int i = 0;
	int max = 0;
	PhoneBook Instance;
	std::string command;

	while (true)
	{
		std::cout << "ENTER A COMMAND : ADD | SEARCH | EXIT" << std::endl;

		if (!std::getline(std::cin, command))
		{
			std::cout << "EOF detected. Exiting..." << std::endl;
			break;
		}
		if (command == "ADD")
		{
			if (i == 8)
				i = 0;
			std::cout << "First name : ";
			if (!std::getline(std::cin, Instance.cont[i].First_name))
			{
				std::cout << "EOF detected. Exiting..." << std::endl;
				break;
			}
			if (Instance.cont[i].First_name.length() > 10)
				Instance.cont[i].First_name = Instance.cont[i].First_name.substr(0, 10);
			while (Instance.cont[i].First_name.length() < 10)
				Instance.cont[i].First_name += " ";

			std::cout << "Last name : ";
			if (!std::getline(std::cin, Instance.cont[i].Last_name))
			{
				std::cout << "EOF detected. Exiting..." << std::endl;
				break;
			}
			if (Instance.cont[i].Last_name.length() > 10)
				Instance.cont[i].Last_name = Instance.cont[i].Last_name.substr(0, 10);
			while (Instance.cont[i].Last_name.length() < 10)
				Instance.cont[i].Last_name += " ";

			std::cout << "Nickname : ";
			if (!std::getline(std::cin, Instance.cont[i].Nickname))
			{
				std::cout << "EOF detected. Exiting..." << std::endl;
				break;
			}
			if (Instance.cont[i].Nickname.length() > 10)
				Instance.cont[i].Nickname = Instance.cont[i].Nickname.substr(0, 10);
			while (Instance.cont[i].Nickname.length() < 10)
				Instance.cont[i].Nickname += " ";

			std::cout << "Phone Number : ";
			if (!std::getline(std::cin, Instance.cont[i].Phone_number))
			{
				std::cout << "EOF detected. Exiting..." << std::endl;
				break;
			}
			if (Instance.cont[i].Phone_number.length() > 10)
				Instance.cont[i].Phone_number = Instance.cont[i].Phone_number.substr(0, 10);
			while (Instance.cont[i].Phone_number.length() < 10)
				Instance.cont[i].Phone_number += " ";

			std::cout << "Darkest Secret : ";
			if (!std::getline(std::cin, Instance.cont[i].Darkest_secret))
			{
				std::cout << "EOF detected. Exiting..." << std::endl;
				break;
			}
			if (Instance.cont[i].Darkest_secret.length() > 10)
				Instance.cont[i].Darkest_secret = Instance.cont[i].Darkest_secret.substr(0, 10);
			while (Instance.cont[i].Darkest_secret.length() < 10)
				Instance.cont[i].Darkest_secret += " ";

			i++;
			if (max != 8)
				max++;
			system("clear");
		}
		else if (command == "SEARCH")
		{
			std::string s;
			if (print_tab(Instance, max) == 1)
				std::cout << "No contact to find" << std::endl;
			else
			{
				std::cout << "Enter the index of the desired contact : ";
				if (!std::getline(std::cin, s))
				{
					std::cout << "EOF detected. Exiting..." << std::endl;
					break;
				}
				int d = convert_string_to_int(s);
				if (d > max || d == 0)
				{
					std::cout << std::endl;
					std::cout << "Input is not a valid Index >_< !!" << std::endl;
					std::cout << std::endl;
				}
				else
				{
					std::cout << std::endl;
					ft_put_contact(Instance, d);
				}
			}
		}
		else if (command == "EXIT")
			break;
	}

	return 0;
}
