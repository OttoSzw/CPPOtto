#include "Zombie.hpp"

int	main()
{
	Zombie instance;
	std::string nom;

	std::cin >> nom;
	instance.getName() = nom;
	std::cout << nom;
	instance.announce();
	return (0);
}