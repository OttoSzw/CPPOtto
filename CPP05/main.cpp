#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat bob("Bob", 151);
		Bureaucrat alice("Alice", 0);
		Bureaucrat charlie("Charlie", 100);

		std::cout << charlie << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Caught exception: " << e.what() << std::endl;
	}

	return 0;
}
