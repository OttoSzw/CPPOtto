#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat bob("Bob", 2);
		Bureaucrat alice("Alice", 150);
		Bureaucrat charlie("Charlie", 1);

		std::cout << bob << std::endl;
		bob.decrementGrade();
		std::cout << bob << std::endl;

		std::cout << alice << std::endl;
		alice.decrementGrade();
		std::cout << alice << std::endl;

		std::cout << charlie << std::endl;
		charlie.decrementGrade();
		std::cout << charlie << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << std::endl;
		std::cerr << "\033[1;31mCaught exception: \033[0m" << e.what() << std::endl;
	}
	return 0;
}
