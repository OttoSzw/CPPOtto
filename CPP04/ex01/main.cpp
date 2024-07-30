#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* tab[10];

	for (size_t i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
		{
			Dog* dog = new Dog();
			std::cout << "Idee 1: " << dog->getBrain()->ideas[0] << std::endl;
			std::cout << "Idee 100: " << dog->getBrain()->ideas[0] << std::endl;
			tab[i] = dog;
		}
		else
		{
			Cat* cat = new Cat();
			std::cout << "Idee 1: " << cat->getBrain()->ideas[0] << std::endl;
			std::cout << "Idee 100: " << cat->getBrain()->ideas[0] << std::endl;
			tab[i] = cat;
		}
	}
	
	std::cout << std::endl;
	std::cout << std::endl;
	for (size_t i = 0; i < 10; i++)
	{
		delete tab[i];
	}
	
	return (0);
}