#include "AMateria.hpp"

AMateria::AMateria(std::string const& type) : type(type)
{
    std::cout << "\033[1;32mAMateria constructor called !\033[0m" << std::endl;
}

AMateria::AMateria(const AMateria& copy)
{
    std::cout << "\033[1;32mAMateria copy constructor called !\033[0m" << std::endl;
    *this = copy;
}

AMateria &AMateria::operator=(const AMateria& ope)
{
    if (this != &ope)
    {
        this->type = ope.type;
    }
    return (*this);
}

AMateria::~AMateria()
{
    std::cout << "\033[1;35mAMateria destructor called !\033[0m" << std::endl;
}

std::string const &AMateria::getType() const
{
    return (type);
}

void AMateria::use(ICharacter& target)
{
	if (this->getType() == "ice")
	{
    	std::cout << "\033[1;36m Otto shoots an ice bolt at \033[0m" << target.getName() << std::endl;
	}
	else if (this->getType() == "cure")
	{
		std::cout << "\033[1;32m Otto heals "  << target.getName() << "’s wounds \033[0m"<< std::endl;
	}
	else
		std::cout << "AMateria used on " << target.getName() << std::endl;
}
