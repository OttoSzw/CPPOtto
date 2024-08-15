#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : virtual public Form
{
	private:

		std::string target;

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm& copy);
		RobotomyRequestForm	&operator=(const RobotomyRequestForm& ope);
		~RobotomyRequestForm();

		void	beSigned(Bureaucrat &bureaucrat);

};

#endif