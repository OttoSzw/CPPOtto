#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : virtual public Form
{
	private:

		std::string target;

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string Target);
		RobotomyRequestForm(const RobotomyRequestForm& copy);
		RobotomyRequestForm	&operator=(const RobotomyRequestForm& ope);
		~RobotomyRequestForm();

		virtual void			execute(Bureaucrat const &executor)const;

};

#endif