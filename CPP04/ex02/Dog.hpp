#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : virtual public Animal
{
	private:
		Brain *brain;

	public:
		Dog();
		Dog(const Dog& copy);
		Dog &operator=(const Dog& ope);
		~Dog();

		virtual void	makeSound() const;
		Brain	*getBrain();
};

#endif