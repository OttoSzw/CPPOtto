#include "Contact.hpp"

// Getters

std::string Contact::getFirstName() const
{
	return (first_name);
}

std::string Contact::getLastName() const
{
	return (last_name);
}

std::string Contact::getNickname() const
{
	return (nickname);
}

std::string Contact::getPhoneNumber() const
{
	return (phone_number);
}

std::string Contact::getDarkestSecret() const
{
	return (darkest_secret);
}

// Setters
void Contact::setFirstName(const std::string &firstName)
{
	first_name = firstName;
}

void Contact::setLastName(const std::string &lastName)
{
	last_name = lastName;
}

void Contact::setNickname(const std::string &nickname)
{
	this->nickname = nickname;
}

void Contact::setPhoneNumber(const std::string &phoneNumber)
{
	phone_number = phoneNumber;
}

void Contact::setDarkestSecret(const std::string &darkestSecret)
{
	darkest_secret = darkestSecret;
}