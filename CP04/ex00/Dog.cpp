#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor called !" << std::endl;
}

Dog::Dog(std::string name) : Animal()
{
    std::cout << "Dog constructor called !" << std::endl;
    this->type = name;
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
    std::cout << "Dog copy constructor called !" << std::endl;
    *this = copy;
}

Dog	&Dog::operator=(const Dog& ope)
{
	this->type = ope.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << " Dog Destructor called !" << std::endl;
}

void    Dog::showType(void)
{
    std::cout << "The type is " << this->type;
    makeSound();
}

void    Dog::makeSound(void)
{
    std::cout << "  :  Wouaf Wouaaf Wouaf !" << std::endl;
}