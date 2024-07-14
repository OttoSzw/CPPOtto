#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << name << "\033[1;32m Constructor Basic Called\033[0m" << std::endl;
	this->name = "Unamed Zombie";
	std::cout << std::endl;
}

Zombie::Zombie(std::string name)
{
	std::cout << name << "\033[1;32m Constructor string Called\033[0m" << std::endl;
	setName(name);
	std::cout << std::endl;
}
Zombie::~Zombie(void)
{
	std::cout << std::endl;
	std::cout << "~ Zombie " << name << " is dyiiinggg..." << std::endl;
	std::cout << std::endl;
}	

void	Zombie::announce(void)
{
	std::cout << ": BraiiiiiiinnnzzzZ...";
	std::cout << " 🤢" << std::endl;
}

std::string	Zombie::getName() const
{
	return (name);
}

void	Zombie::setName(const std::string Name)
{
	name = Name;
}
