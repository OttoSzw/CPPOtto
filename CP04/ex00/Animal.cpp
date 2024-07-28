#include "Animal.hpp"

Animal::Animal()
{
	std::cout << " Animal Constructor called !" << std::endl;
	this->type = NULL;
}

Animal::Animal(const Animal& copy)
{
	std::cout << " Animal Copy Constructor called !" << std::endl;
	*this = copy;
}

Animal	&Animal::operator=(const Animal& ope)
{
	this->type = ope.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << " Animal Destructor called !" << std::endl;
}

void    Animal::makeSound(void)
{
    std::cout << "  :  Groooaaaaaarrr !" << std::endl;
}