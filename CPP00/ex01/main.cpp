#include "PhoneBook.hpp"
#include <iostream>
#include <sstream>

int main()
{
	PhoneBook Instance;
	std::string command;

	Instance.loop = 0;
	Instance.max_index = 0;
	while (true)
	{
		std::cout << "\033[94mENTER A COMMAND : ADD | SEARCH | EXIT\033[0m" << std::endl;

		if (!std::getline(std::cin, command))
		{
			std::cout << "EOF detected. Exiting..." << std::endl;
			break;
		}
		if (command == "ADD")
		{
			Instance.addContact();
			system("clear");
			std::cout << std::endl;
    		std::cout << "\033[92m🎉 Contact added successfully. 🎉\033[0m" << std::endl;
			std::cout << std::endl;

		}
		else if (command == "SEARCH")
		{
			Instance.searchContact();
		}
		else if (command == "EXIT")
			break;
	}

	return 0;
}
