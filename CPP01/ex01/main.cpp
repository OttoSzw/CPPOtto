#include "Zombie.hpp"

int	main()
{
	Zombie* heap = NULL;
	int number = 0;
	std::string nom;
	std::string tempo;

	std::cout << std::endl;
	std::cout << "Enter a name your Zombieess : ";
	std::cin >> nom;
	std::cout << std::endl;
	std::cout << "Now enter a number to fill the horde : ";
	std::cin >> tempo;
	std::cout << std::endl;
	number = heap->convert_string_to_int(tempo);
	if (!number || number < 0)
	{
		std::cout << "\033[1;31mWe need a real/positive number to create Zombiees..\033[0m" << std::endl;
		return (1);
	}
	heap = zombieHorde(number, nom);
	std::cout << std::endl;
	delete[] heap;
	std::cout << std::endl;
	return (0);
}	