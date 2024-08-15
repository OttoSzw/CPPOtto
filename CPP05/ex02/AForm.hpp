#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class GradeTooLow : public std::runtime_error
{
	public:
		GradeTooLow() : std::runtime_error("Grade too low to be signed") {}
};

class GradeInvalidException : public std::runtime_error
{
	public:
		GradeInvalidException() : std::runtime_error("Grade out of range") {}
};

class AlreadySignedException : public std::runtime_error
{
	public:
		AlreadySignedException() : std::runtime_error("Form already signed") {}
};

class Form
{
	private:

		std::string const 	name;
		bool				signd;
		const int			actual_grade;
		const int			needed_grade;

	protected:

		Form(std::string Name, const int GradeN, const int GradeA);
		Form(const Form &copy);
		Form	&operator=(const Form &ope);
		~Form();

	public:


		std::string const	getName();
		bool				getSignd();
		 int 			getActualG() const;
		 int 			getNeededG() const;

		virtual void	beSigned(Bureaucrat &bureaucrat) = 0;

		friend std::ostream& operator<<(std::ostream& os, const Form& b);
};

#endif