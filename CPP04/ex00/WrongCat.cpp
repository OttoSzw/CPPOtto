#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout << "\033[1;36mWrongCat constructor called !\033[0m" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy)
{
    *this = copy;
    std::cout << "WrongCat copy constructor called !" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat& ope)
{
    if (this != &ope)
    {
        this->type = ope.type;
    }
    return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "\033[1;31mWrongCat destructor called !\033[0m" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "\" Wrong Miaouuuuuuuuuuuuu \"" << std::endl;
}
