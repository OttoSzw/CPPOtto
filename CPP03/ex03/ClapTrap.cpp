#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : Name(), HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
	std::cout << "Default Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : Name(name), HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
	std::cout << "Default Constructor Called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor has been called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	*this = copy;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		this->setName(other.getName());
		this->setHitPoints(other.getHitPoints());
		this->setEnergyPoints(other.getEnergyPoints());
		this->setAttackDamage(other.getAttackDamage());
	}
	return (*this);
}


// My getters and setters

std::string	ClapTrap::getName() const
{
	return (Name);
}

void	ClapTrap::setName(const std::string nom)
{
	Name = nom;
}

int	ClapTrap::getHitPoints() const
{
	return (HitPoints);
}

void	ClapTrap::setHitPoints(const int hit)
{
	HitPoints = hit;
}

int	ClapTrap::getEnergyPoints() const
{
	return (EnergyPoints);
}

void	ClapTrap::setEnergyPoints(const int energy)
{
	EnergyPoints = energy;
}

int	ClapTrap::getAttackDamage() const
{
	return (AttackDamage);
}

void	ClapTrap::setAttackDamage(const int attack)
{
	AttackDamage = attack;
}


// Functions for my main

void	ClapTrap::attack(const std::string& target)
{
	if (this->EnergyPoints == 0 || this->HitPoints == 0)
	{
		std::cout << "\033[1;33mNot anymore Points...\033[0m" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing \033[1;31m10\033[0m points of damage !" << std::endl;
		this->EnergyPoints -= 1;
		std::cout << EnergyPoints << " EnergyPoints left" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->getName() << " loses \033[1;31m" << amount << "\033[0m hit points !" << std::endl;
	this->HitPoints -= amount;
	std::cout << "ClapTrap " << this->getName() << " has \033[1;32m" << this->HitPoints << "\033[0m left !" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->EnergyPoints == 0 || this->HitPoints == 0)
	{
		std::cout << "\033[1;33mNot anymore Points...\033[0m" << std::endl;
	}
	if (this->getHitPoints() < 10)
	{
		std::cout << "ClapTrap " << this->getName() << " repaired himself and get back \033[1;32m" << amount << "\033[0m hit points !" << std::endl;
		this->EnergyPoints -= 1;
		std::cout << EnergyPoints << " EnergyPoints left" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->getName() << " tried to repaire himself but already have \033[1;32m10 \033[0mhit points !" << std::endl;
		std::cout << EnergyPoints << " EnergyPoints left cause don't need to be repaired" << std::endl;
	}
}