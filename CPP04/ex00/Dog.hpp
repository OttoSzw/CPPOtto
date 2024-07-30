#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : virtual public Animal
{
	public:
		Dog();
		Dog(const Dog& copy);
		Dog &operator=(const Dog& ope);
		~Dog();

		virtual void	makeSound() const;
};

#endif