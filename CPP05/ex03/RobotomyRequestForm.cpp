#include "RobotomyRequestForm.hpp"
#include <ctime>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm():Form("RobotomyRequestForm", 72, 45)
{
	std::cout << "\033[1;31mHii RobotomyRequestForm !\033[0m" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string Target):Form("RobotomyRequestForm", 72, 45)
{
	this->target = Target;
	std::cout << "\033[1;31mHii RobotomyRequestForm !\033[0m" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy):Form("RobotomyRequestForm", 72, 45)
{
	this->target = copy.target;
	std::cout << "Hii copy RobotomyRequestForm !" << std::endl;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm& ope)
{
	this->target = ope.target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "\033[1;32mGooodbyeee RobotomyRequestForm !\033[0m" << std::endl;
}

void	RobotomyRequestForm::execute(Bureaucrat const &bureaucrat) const
{
	if (bureaucrat.getGrade() <= this->getNeededG())
	{
		std::cout << "* MAKE SOME DRILLING NOISES ! *" << std::endl;
		std::srand(std::time(NULL));
		if (std::rand() % 2 == 0)
		{
			std::cout << this->target << " was robotomized !" << std::endl;
		}
		else
		{
			std::cout << this->target << " was not robotomized !" << std::endl;
		}
	}
	else
	{
		throw GradeTooLowException();
	}
}