#include "Zombie.hpp"

int	main()
{
	Zombie* heap;
	std::string nom;

	std::cout << "~ Enter a name for your \033[1;31mZommmbiieee\033[0m : ";
	std::cin >> nom;
	std::cout << std::endl;
	heap = newZombie(nom);
	std::cout << "~ ";
	std::cout << heap->getName();
	heap->announce();
	randomChump("Stack Zombie");
	delete heap;
	return (0);
}