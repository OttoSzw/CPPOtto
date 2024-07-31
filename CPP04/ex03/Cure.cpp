#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure constructor called !" << std::endl;
}

Cure::Cure(const Cure &copy) : AMateria(copy)
{
	std::cout << "Cure copy constructor called !" << std::endl;
	*this = copy;
}

Cure &Cure::operator=(const Cure &ope)
{
	if (this != &ope)
	{
		this->type = ope.type;
	}
	return (*this);
}

Cure::~Cure()
{
	std::cout << "Cure destructor called !" << std::endl;
}

Cure *Cure::clone() const
{
	return (new Cure(*this));
}
