#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():Form("PresidentialPardonForm", 25, 5)
{
	std::cout << "\033[1;31mHii PresidentialPardonForm !\033[0m" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string Target):Form("PresidentialPardonForm", 25, 5)
{
	this->target = Target;
	std::cout << "\033[1;31mHii PresidentialPardonForm !\033[0m" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy):Form("PresidentialPardonForm", 25, 5)
{
	this->target = copy.target;
	std::cout << "Hii copy PresidentialPardonForm !" << std::endl;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm& ope)
{
	this->target = ope.target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "\033[1;32mGooodbyeee PresidentialPardonForm !\033[0m" << std::endl;
}

void	PresidentialPardonForm::execute(Bureaucrat const &bureaucrat) const
{
	if (bureaucrat.getGrade() <= this->getNeededG())
	{
		std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	}
	else
	{
		throw GradeTooLowException();
	}
}