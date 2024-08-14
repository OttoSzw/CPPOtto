#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class GradeTooLowException : public std::runtime_error
{
	public:
		GradeTooLowException() : std::runtime_error("Grade too low") {}
};

class GradeTooHighException : public std::runtime_error
{
	public:
		GradeTooHighException() : std::runtime_error("Grade too high") {}
};

class Bureaucrat
{
	private:

		std::string const 	name;
		int					grade;

	public:
		Bureaucrat(const std::string Name, int Grade);
		Bureaucrat(const Bureaucrat& copy);
		Bureaucrat	&operator=(const Bureaucrat& ope);
		~Bureaucrat();

		void	incrementGrade();
		void	decrementGrade();
		std::string const  	getName() const;
		int					getGrade() const;
		friend std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);
};

#endif