#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "\033[1;36mBrain constructor called !\033[0m" << std::endl;
}

Brain::Brain(const Brain& copy)
{
	std::cout << "Brain copy constructor called !" << std::endl;
	*this = copy;
}

Brain &Brain::operator=(const Brain& ope)
{
	if (this != &ope)
	{
		for (size_t i = 0; i < 100; i++)
			this->ideas[i] = ope.ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "\033[1;36mBrain destructor called !\033[0m" << std::endl;
}