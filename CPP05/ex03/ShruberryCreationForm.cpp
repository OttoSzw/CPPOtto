#include "ShruberryCreationForm.hpp"
#include <fstream>

ShruberryCreationForm::ShruberryCreationForm():Form("ShruberryCreationForm", 145, 137)
{
	std::cout << "\033[1;31mHii ShruberryConstructor !\033[0m" << std::endl;
}

ShruberryCreationForm::ShruberryCreationForm(std::string Target):Form("ShruberryCreationForm", 145, 137)
{
	this->target = Target;
	std::cout << "\033[1;31mHii ShruberryConstructor !\033[0m" << std::endl;
}

ShruberryCreationForm::ShruberryCreationForm(const ShruberryCreationForm& copy):Form("ShruberryCreationForm", 145, 137)
{
	this->target = copy.target;
	std::cout << "Hii copy ShruberryConstructor !" << std::endl;
}

ShruberryCreationForm	&ShruberryCreationForm::operator=(const ShruberryCreationForm& ope)
{
	this->target = ope.target;
	return (*this);
}

ShruberryCreationForm::~ShruberryCreationForm()
{
	std::cout << "\033[1;32mGooodbyeee ShruberryConstructor !\033[0m" << std::endl;
}

void	ShruberryCreationForm::execute(Bureaucrat const &bureaucrat) const
{
	if (bureaucrat.getGrade() <= this->getNeededG())
	{
		std::cout << "Form signed successfully." << std::endl;
		std::ofstream file((target + ".shrubbery").c_str());
		if (!file.is_open())
		{
			std::cerr << "Failed to open file !!." << std::endl;
      		return;
		}
		file << "        ccee88oo          " << std::endl;
		file << "  C8O8O8Q8PoOb o8oo      " << std::endl;
		file << " dOB69QO8PdUOpugoO9bD    " << std::endl;
		file << "CgggbU8OU qOp qOdoUOdcb  " << std::endl;
		file << "   6OuU  /p u gcoUodpP   " << std::endl;
		file << "      \\\\//  /douUP      " << std::endl;
		file << "        \\\\////         " << std::endl;
		file << "         |||/\\          " << std::endl;
		file << "         |||\\/          " << std::endl;
		file << "         |||||           " << std::endl;
		file << "   .....//||||\\....     " << std::endl;
		file.close();
	}
	else
	{
		throw GradeTooLowException();
	}
}