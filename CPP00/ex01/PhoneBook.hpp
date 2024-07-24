#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"
#include <cstdlib>
#include <sstream>

class PhoneBook
{
private:
	Contact cont[8];

public:

	int max_index;
	int loop;
    Contact getContact(int index) const;
	void addContact();
	void ft_put_contact(PhoneBook Instance, int i);
	int print_tab(PhoneBook Instance, int max);
	void searchContact();
	int convert_string_to_int(std::string str);
};

#endif
