#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : virtual public Animal
{
	private:
		Brain *brain;

	public:
		Cat();
		Cat(const Cat& copy);
		Cat &operator=(const Cat& ope);
		~Cat();

		void	makeSound() const;
		Brain	*getBrain();
};

#endif