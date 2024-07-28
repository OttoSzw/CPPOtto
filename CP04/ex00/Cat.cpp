#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat constructor called !" << std::endl;
}

Cat::Cat(std::string name) : Animal()
{
    std::cout << "Cat constructor called !" << std::endl;
    this->type = name;
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
    std::cout << "Cat copy constructor called !" << std::endl;
    *this = copy;
}

Cat	&Cat::operator=(const Cat& ope)
{
	this->type = ope.type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << " Cat Destructor called !" << std::endl;
}

void    Cat::showType(void)
{
    std::cout << "The type is " << this->type;
    makeSound();
}

void    Cat::makeSound(void)
{
    std::cout << "  :  Miaouuuuuuuuuu !" << std::endl;
}