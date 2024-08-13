#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string Name, int Grade) : name(Name), grade(Grade)
{
	std::cout << "Bureaucrat Constructor Called !" << std::endl;
	if (grade > 150)
	{
		throw GradeTooLowException(); // Correction ici
	}
	if (grade < 1)
	{
		throw GradeTooHighException(); // Correction ici
	}
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor Called !" << std::endl;
}

std::string const Bureaucrat::getName() const
{
	return (name);
}

int Bureaucrat::getGrade() const
{
	return (grade);
}

void Bureaucrat::incrementGrade()
{
	if (++grade > 150)
	{ // Correction ici
		throw GradeTooLowException();
	}
}

void Bureaucrat::decrementGrade()
{
	if (--grade < 1)
	{ // Correction ici
		throw GradeTooHighException();
	}
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &b)
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade();
	return os;
}
