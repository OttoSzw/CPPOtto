#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(std::string name);
        Dog(const Dog& copy);
        Dog &operator=(const Dog& ope);
        ~Dog();
        void	showType();
        void    makeSound();
};

#endif