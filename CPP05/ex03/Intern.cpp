#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "\033[1;31mHii Intern !\033[0m" << std::endl;
}

Intern::Intern(std::string forname, std::string Target)
{
	this->name = forname;
	this->target = Target;
	std::cout << "\033[1;31mHii Intern !\033[0m" << std::endl;
}

Intern::Intern(const Intern &copy)
{
	this->target = copy.target;
	std::cout << "Hii copy Intern !" << std::endl;
}

Intern &Intern::operator=(const Intern &ope)
{
	this->target = ope.target;
	return (*this);
}

Intern::~Intern()
{
	std::cout << "\033[1;32mGooodbyeee Intern !\033[0m" << std::endl;
}

Form *Intern::makeForm(std::string name, std::string target)
{
	std::string pos[3] = {"robotomy request", "presidential pardon", "shruberry creation"};
	Form		*array_functions[3] = {new RobotomyRequestForm(target), new PresidentialPardonForm(target), new ShruberryCreationForm(target)};
	Form *result = NULL;
	try
	{
		for (int i = 0; i < 3; i++)
		{
			if (pos[i] == name)
				result = array_functions[i];
			else
				delete array_functions[i];
		}
		if (!result)
			throw std::invalid_argument("Invalid form name.");
		else
		{
        	std::cout << "Intern creates " << name << " for " << target << std::endl;
			return (result);
		}
	}
	catch (const std::invalid_argument &e)
	{
		std::cerr << "Intern: " << e.what() << '\n';
		return (NULL);
	}
	return (NULL);
}