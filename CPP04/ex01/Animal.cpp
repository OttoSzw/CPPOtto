#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "\033[1;33mAnimal constructor Called !\033[0m" << std::endl;
	this->type = "What's my name ?";
}

Animal::Animal(const Animal& copy)
{
	std::cout << "\033[1;33mAnimal copy constructor Called !\033[0m" << std::endl;
	*this = copy;
}

Animal &Animal::operator=(const Animal& ope)
{
	if (this != &ope)
	{
		this->type = ope.type;
	}
	return (*this);
}

Animal::~Animal()
{
	std::cout << "\033[1;33mAnimal Destructor Called !\033[0m" << std::endl;
}

std::string	Animal::getType() const
{
	return (type);
}

void	Animal::setType(std::string t)
{
	this->type = t;
}

void	Animal::makeSound() const
{
	std::cout << "\" Ahouuuuuuu, what sound should i make ?? \"" << std::endl;
}