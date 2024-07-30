#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "\033[1;35mWrongAnimal constructor Called !\033[0m" << std::endl;
    this->type = "What's my name ?";
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
    std::cout << "\033[1;35mWrongAnimal copy constructor Called !\033[0m" << std::endl;
    *this = copy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal& ope)
{
    if (this != &ope)
    {
        this->type = ope.type;
    }
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "\033[1;35mWrongAnimal Destructor Called !\033[0m" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return type;
}

void WrongAnimal::setType(std::string t)
{
    this->type = t;
}

void WrongAnimal::makeSound() const
{
    std::cout << "\" Croarrr Croarrr, what sound should I make ?? \"" << std::endl;
}
