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

void	Bureaucrat::signForm(Form& form)
{
	if (form.getSignd() == 1)
		std::cout << this->name << " signed " << form.getName() << std::endl;
	else
		std::cout << this->name << " couldn't signed " << form.getName() << std::endl;
}

void	Bureaucrat::executeForm(Form const &form) const
{
	try
	{
        form.execute(*this);
        std::cout << this->name << " executed " << form.getName() << std::endl;
    }
	catch (const std::exception& e)
	{
        std::cerr << "Error executing form: " << e.what() << std::endl;
    }
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &b)
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade();
	return os;
}
