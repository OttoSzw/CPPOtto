#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "\033[1;32mCat constructor called !\033[0m" << std::endl;
}

Cat::Cat(const Cat& copy)
{
	*this = copy;
	std::cout << "Cat copy constructor called !" << std::endl;
}

Cat &Cat::operator=(const Cat& ope)
{
	if (this != &ope)
	{
		this->type = ope.type;
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "\033[1;31mCat destructor called !\033[0m" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "\" Miaouuuuuuuuuuuuu \"" << std::endl;
}