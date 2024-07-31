#include "Character.hpp"
#include <iostream>

Character::Character(std::string const &name) : name(name)
{
	std::cout << "Character constructor called !" << std::endl;
	for (int i = 0; i < 4; ++i)
	{
		inventory[i] = NULL;
	}
}

Character::Character(Character const &other) : name(other.name)
{
	std::cout << "Character copy constructor called !" << std::endl;
	for (int i = 0; i < 4; ++i)
	{
		if (other.inventory[i])
		{
			inventory[i] = other.inventory[i]->clone();
		}
		else
		{
			inventory[i] = NULL;
		}
	}
}

Character &Character::operator=(Character const &other)
{
	if (this != &other)
	{
		name = other.name;
		for (int i = 0; i < 4; ++i)
		{
			delete inventory[i];
			inventory[i] = (other.inventory[i] ? other.inventory[i]->clone() : NULL);
		}
	}
	return (*this);
}

Character::~Character()
{
	std::cout << "Character destructor called !" << std::endl;
	for (int i = 0; i < 4; ++i)
	{
		delete inventory[i];
	}
}

std::string const &Character::getName() const
{
	return name;
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; ++i)
	{
		if (!inventory[i])
		{
			inventory[i] = m;
			return;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
		inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4 && inventory[idx])
	{
		inventory[idx]->use(target);
	}
}
