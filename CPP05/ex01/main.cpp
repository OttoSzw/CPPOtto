#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat bob("Bob", 2);
		Bureaucrat alice("Alice", 150);
		Bureaucrat charlie("Charlie", 25);

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

		Form	contract("contract", 42, bob.getGrade());
		Form	contract2("contract", 42, alice.getGrade());
		Form	contract3("contract", 42, charlie.getGrade());

		std::cout << "\033[1;34mTry to sign his form : \033[0m" << std::endl;
		contract.beSigned(bob);
		std::cout << "\033[1;34mTry to sign his form : \033[0m" << std::endl;
		contract2.beSigned(alice);
		std::cout << "\033[1;34mTry to sign his form : \033[0m" << std::endl;
		contract3.beSigned(charlie);
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
