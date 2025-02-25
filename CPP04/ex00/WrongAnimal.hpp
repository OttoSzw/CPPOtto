#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected:

		std::string type;

	public:

		WrongAnimal();
		WrongAnimal(const WrongAnimal& copy);
		WrongAnimal &operator=(const WrongAnimal& ope);
		virtual ~WrongAnimal();

		std::string getType() const;
		void	setType(std::string type);
		 void	makeSound() const;
};

#endif