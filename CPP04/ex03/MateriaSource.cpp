#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource constructor called !" << std::endl;
	for (int i = 0; i < 4; ++i)
	{
		materias[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource& copy)
{
	std::cout << "MateriaSource copy constructor called !" << std::endl;
	*this = copy;
}

MateriaSource &MateriaSource::operator=(const MateriaSource& ope)
{
	if (this != &ope)
	{
		for (size_t i = 0; i < 4; i++)
		{
			this->materias[i] = ope.materias[i];
		}
	}
	return (*this);
	
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor called !" << std::endl;
	for (int i = 0; i < 4; ++i)
	{
		delete materias[i];
	}
}

void MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; ++i)
	{
		if (!materias[i])
		{
			materias[i] = m;
			return;
		}
	}
	delete m; // Clean up if not stored
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; ++i)
	{
		if (materias[i] && materias[i]->getType() == type)
		{
			return materias[i]->clone();
		}
	}
	return (NULL);
}
