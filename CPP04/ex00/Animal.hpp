#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:

		std::string type;

	public:

		Animal();
		Animal(const Animal& copy);
		Animal &operator=(const Animal& ope);
		virtual ~Animal();

		std::string getType() const;
		void	setType(std::string type);
		virtual void	makeSound() const;
};

#endif