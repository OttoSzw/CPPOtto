#include "Zombie.hpp"

int Zombie::convert_string_to_int(std::string str)
{
	int n;

	std::istringstream iss(str);

	iss >> n;
	return (n);
}

Zombie::Zombie()
{
	std::cout << name << "\033[1;32m Constructor Basic Called\033[0m" << std::endl;
	this->name = "Unamed Zombie";
}

Zombie::~Zombie(void)
{
	std::cout << "\033[1;31m~ Zombie " << name << " is dyiiinggg...\033[0m" << std::endl;
}	

void	Zombie::announce(void)
{
	std::cout << this->name;
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
