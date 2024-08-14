#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string Name, int Grade) : name(Name), grade(Grade)
{
	std::cout << "Bureaucrat Constructor Called !" << std::endl;
	if (grade > 150)
	{
		throw GradeTooLowException();
	}
	if (grade < 1)
	{
		throw GradeTooHighException();
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy)
{
	*this = copy;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat& ope)
{
	if (this != &ope)
	{
		this->grade = ope.grade;
	}
	return (*this);
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
	{
		throw GradeTooLowException();
	}
}

void Bureaucrat::decrementGrade()
{
	if (--grade < 1)
	{
		throw GradeTooHighException();
	}
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &b)
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade();
	return os;
}
