#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShruberryCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	private:

		std::string name;
		std::string target;

	public:
		Intern();
		Intern(std::string forname, std::string Target);
		Intern(const Intern& copy);
		Intern	&operator=(const Intern& ope);
		~Intern();

		Form* makeForm(std::string name, std::string target);
};

#endif