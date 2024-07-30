#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "\033[1;32mDog constructor called !\033[0m" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
	for (size_t i = 0; i < 100; i++)
		this->brain->ideas[i] = "Je suis un chien intelligent ! Enfin je crois..";
}

Dog::Dog(const Dog& copy)
{
	this->brain = NULL;
	std::cout << "Dog copy constructor called !" << std::endl;
	*this = copy;
}

Dog &Dog::operator=(const Dog& ope)
{
	if (this != &ope)
	{
		if (this->brain != NULL)
			delete this->brain;
		this->type = ope.type;
		this->brain = new Brain(*(ope.brain));
	}
	return (*this);	return (*this);
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "\033[1;31mDog destructor called !\033[0m" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "\" Wouaf Wouaf Wouaf !! \"" << std::endl;
}

Brain	*Dog::getBrain()
{
	return (brain);
}