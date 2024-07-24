// PhoneBook.cpp
#include "PhoneBook.hpp"

Contact PhoneBook::getContact(int index) const
{
    if (index >= 0 && index < max_index)
    {
        return cont[index];
    }
    else
    {
        throw std::out_of_range("Index out of bounds");
    }
}

void PhoneBook::addContact()
{
    if (loop == 8)
        loop = 0;

    Contact new_contact;

    std::cout << "First name : ";
    std::string firstName;
    if (!std::getline(std::cin, firstName))
    {
        std::cout << "EOF detected. Exiting..." << std::endl;
        return;
    }
    if (firstName.length() > 10)
				firstName = firstName.substr(0, 10);
    while (firstName.length() < 10)
        firstName += " ";
    new_contact.setFirstName(firstName);
    std::cout << "Last name : ";
    std::string lastName;

    if (!std::getline(std::cin, lastName))
    {
        std::cout << "EOF detected. Exiting..." << std::endl;
        return;
    }
    if (lastName.length() > 10)
				lastName = lastName.substr(0, 10);
    while (lastName.length() < 10)
        lastName += " ";
    new_contact.setLastName(lastName);

    std::cout << "Nickname : ";
    std::string Nickname;

    if (!std::getline(std::cin, Nickname))
    {
        std::cout << "EOF detected. Exiting..." << std::endl;
        return;
    }
    if (Nickname.length() > 10)
				Nickname = Nickname.substr(0, 10);
    while (Nickname.length() < 10)
        Nickname += " ";
    new_contact.setNickname(Nickname);

    std::cout << "Phone Number : ";
    std::string Phone;

    if (!std::getline(std::cin, Phone))
    {
        std::cout << "EOF detected. Exiting..." << std::endl;
        return;
    }
    if (Phone.length() > 10)
				Phone = Phone.substr(0, 10);
    while (Phone.length() < 10)
        Phone += " ";
    new_contact.setPhoneNumber(Phone);

    std::cout << "Darkest Secret : ";
    std::string Secret;

    if (!std::getline(std::cin, Secret))
    {
        std::cout << "EOF detected. Exiting..." << std::endl;
        return;
    }
    if (Secret.length() > 10)
				Secret = Secret.substr(0, 10);
    while (Secret.length() < 10)
        Secret += " ";
    new_contact.setDarkestSecret(Secret);

    cont[loop] = new_contact;
    if (max_index != 8)
        max_index++;
    loop++;
}







void PhoneBook::ft_put_contact(PhoneBook Instance, int i)
{
	std::cout << "  -  Firstname |  Lastname  |  Nickname  |   PhoneNb  |   Secret   |" << std::endl;
	std::cout << i << " - " << Instance.getContact(i - 1).getFirstName() << " | "
			  << Instance.getContact(i - 1).getLastName() << " | "
			  << Instance.getContact(i - 1).getNickname() << " | "
			  << Instance.getContact(i - 1).getPhoneNumber() << " | "
			  << Instance.getContact(i - 1).getDarkestSecret() << " | " << std::endl;
	std::cout << std::endl;
}

int PhoneBook::convert_string_to_int(std::string str)
{
	int n;

	std::istringstream iss(str);

	iss >> n;
	return (n);
}

void PhoneBook::searchContact()
{
    std::cout << std::endl;
    std::cout << "\033[96mList of Contacts :\033[0m" << std::endl;
    std::cout << std::endl;
    std::cout << "  -  Firstname |  Lastname  |  Nickname  |   PhoneNb  |   Secret   |" << std::endl;
    for (int i = 0; i < max_index; ++i)
    {
        std::cout << i + 1 << " - " << cont[i].getFirstName() << " | "
                  << cont[i].getLastName() << " | "
                  << cont[i].getNickname() << " | "
                  << "  *****   " << " | "
                  << "  *****   " << " | "
                  << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Enter the index of the desired contact : ";
    std::string input;
    if (!std::getline(std::cin, input))
    {
        std::cout << "EOF detected. Exiting..." << std::endl;
        return;
    }

    std::cout << std::endl;
    int index = convert_string_to_int(input);
    if (index <= 0 || index > max_index)
    {
        std::cout << "Invalid index. Please enter a valid index." << std::endl;
        return;
    }

    ft_put_contact(*this, index);
}
