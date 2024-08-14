#include "Form.hpp"

Form::Form(std::string Name, const int GradeN, const int GradeA) : name(Name), actual_grade(GradeA), needed_grade(GradeN)
{
	std::cout << "\033[1;35mForm Constructor Called !\033[0m" << std::endl;
	signd = 0;
}

Form::Form(const Form& copy) : name(copy.name), actual_grade(copy.actual_grade), needed_grade(copy.needed_grade)
{
	*this = copy;
}

Form	&Form::operator=(const Form& ope)
{
	if (this != &ope)
	{
		this->signd = ope.signd;
	}
	return (*this);
}

Form::~Form()
{
	std::cout << "\033[1;31mForm Destructor Called !\033[0m" << std::endl;
}

std::string const	Form::getName()
{
	return (name);
}

bool	Form::getSignd()
{
	return (signd);
}

int	Form::getActualG() const
{
	return (actual_grade);
}

int	Form::getNeededG() const
{
	return (needed_grade);
}

void	Form::beSigned(Bureaucrat &bureaucrat)
{
	if (this->signd == 1)
	{
		throw AlreadySignedException();
	}
	if (this->needed_grade < 1 || this->needed_grade > 150)
	{
		throw	GradeInvalidException();
	}
	if (bureaucrat.getGrade() <= this->needed_grade && this->signd != 1)
	{
		this->signd = 1;
		bureaucrat.signForm(*this);
	}
	if (bureaucrat.getGrade() > this->needed_grade)
	{
		bureaucrat.signForm(*this);
	}
}


std::ostream &operator<<(std::ostream &os, const Form &b)
{
	os << b.name << ", bureaucrat is " << b.signd;
	return os;
}
