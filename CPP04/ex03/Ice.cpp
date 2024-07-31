#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice constructor called !" << std::endl;
}

Ice::Ice(const Ice &copy) : AMateria(copy)
{
	std::cout << "Ice copy constructor called !" << std::endl;
	*this = copy;
}

Ice &Ice::operator=(const Ice &ope)
{
	if (this != &ope)
	{
		this->type = ope.type;
	}
	return (*this);
}

Ice::~Ice()
{
	std::cout << "Ice destructor called !" << std::endl;
}

Ice *Ice::clone() const
{
	return (new Ice(*this));
}
