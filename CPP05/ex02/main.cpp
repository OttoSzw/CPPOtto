#include "Bureaucrat.hpp"
#include "ShruberryCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		Bureaucrat bob("Bob", 70);
		Bureaucrat alice("Alice", 45);
		Bureaucrat charlie("Charlie", 2);

		std::cout << bob << std::endl;
		bob.decrementGrade();
		std::cout << bob << std::endl;

		std::cout << alice << std::endl;
		alice.decrementGrade();
		std::cout << alice << std::endl;

		std::cout << charlie << std::endl;
		charlie.decrementGrade();
		std::cout << charlie << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;

		ShruberryCreationForm Instance("home");
		RobotomyRequestForm	  Man("b-281");
		PresidentialPardonForm president("Otto");

		bob.executeForm(Instance);
		alice.executeForm(Man);
		charlie.executeForm(president);

		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cerr << "\033[1;31mCaught exception: \033[0m" << e.what() << std::endl;
	}
	return 0;
}
