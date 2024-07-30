#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "\033[1;32mCat constructor called !\033[0m" << std::endl;
	this->brain = new Brain();
	for (size_t i = 0; i < 100; i++)
		this->brain->ideas[i] = "Je suis un chat intelligent ! Enfin je crois..";
	this->type = "Cat";
}

Cat::Cat(const Cat& copy)
{
	this->brain = NULL;
	*this = copy;
	std::cout << "Cat copy constructor called !" << std::endl;
}

Cat &Cat::operator=(const Cat& ope)
{
	if (this != &ope)
	{
		if (this->brain != NULL)
			delete this->brain;
		this->type = ope.type;
		this->brain = new Brain(*(ope.brain));
	}
	return (*this);
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "\033[1;31mCat destructor called !\033[0m" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "\" Miaouuuuuuuuuuuuu \"" << std::endl;
}

Brain	*Cat::getBrain()
{
	return (brain);
}