#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string	Zombie::getName() const
{
	return (name);
}

void	Zombie::setName(const std::string Name)
{
	name = Name;
}