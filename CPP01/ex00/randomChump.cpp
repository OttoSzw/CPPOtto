#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie zombo(name);
	std::cout << zombo.getName();
	zombo.announce();
}