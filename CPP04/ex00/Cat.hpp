#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : virtual public Animal
{
	public:
		Cat();
		Cat(const Cat& copy);
		Cat &operator=(const Cat& ope);
		~Cat();

		virtual void	makeSound() const;
};

#endif