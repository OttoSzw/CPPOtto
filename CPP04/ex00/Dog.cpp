#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "\033[1;32mDog constructor called !\033[0m" << std::endl;
}

Dog::Dog(const Dog& copy)
{
	*this = copy;
	std::cout << "Dog copy constructor called !" << std::endl;
}

Dog &Dog::operator=(const Dog& ope)
{
	if (this != &ope)
	{
		this->type = ope.type;
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "\033[1;31mDog destructor called !\033[0m" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "\" Wouaf Wouaf Wouaf !! \"" << std::endl;
}