#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>

class Contact
{

	public:
	std::string		First_name;
	std::string		Last_name;
	std::string		Nickname;
	std::string		Phone_number;
	std::string		Darkest_secret;
};

class PhoneBook
{
	public:
	Contact cont[8];
};

#endif
