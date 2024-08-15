#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : virtual public Form
{
	private:

		std::string target;

	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm& copy);
		PresidentialPardonForm	&operator=(const PresidentialPardonForm& ope);
		~PresidentialPardonForm();

		void	beSigned(Bureaucrat &bureaucrat);

};

#endif