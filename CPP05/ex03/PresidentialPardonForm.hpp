#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : virtual public Form
{
	private:

		std::string target;

	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string Target);
		PresidentialPardonForm(const PresidentialPardonForm& copy);
		PresidentialPardonForm	&operator=(const PresidentialPardonForm& ope);
		~PresidentialPardonForm();

		virtual void			execute(Bureaucrat const &executor)const;

};

#endif