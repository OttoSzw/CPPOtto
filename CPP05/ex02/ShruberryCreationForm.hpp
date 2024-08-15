#ifndef SHRUBERRYCREATIONFORM_HPP
#define SHRUBERRYCREATIONFORM_HPP

#include "AForm.hpp"

class ShruberryCreationForm : virtual public Form
{
	private:

		std::string target;

	public:
		ShruberryCreationForm();
		ShruberryCreationForm(const ShruberryCreationForm& copy);
		ShruberryCreationForm	&operator=(const ShruberryCreationForm& ope);
		~ShruberryCreationForm();

		void	beSigned(Bureaucrat &bureaucrat);
};

#endif