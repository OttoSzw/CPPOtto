#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	this->setName(name);
	std::cout << this->getName() << " Constructor Called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy)
{
	this->setHitPoints(copy.getHitPoints());
	this->setEnergyPoints(copy.getEnergyPoints());
	this->setAttackDamage(copy.getAttackDamage());
	this->setName(copy.getName());
}

ScavTrap	&ScavTrap::operator=(const ScavTrap& ope)
{
	if (this != &ope)
	{
		this->setHitPoints(ope.getHitPoints());
		this->setEnergyPoints(ope.getEnergyPoints());
		this->setAttackDamage(ope.getAttackDamage());
		this->setName(ope.getName());
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << this->getName() << " Destructor Called" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->getEnergyPoints() == 0 || this->getHitPoints() == 0)
	{
		std::cout << "\033[1;33mNot anymore Points...\033[0m" << std::endl;
	}
	else
	{
		std::cout << this->getName() << " attacks " << target << ", causing \033[1;31m" << this->getAttackDamage() << "\033[0m points of damage BOOOOM!" << std::endl;
		this->setEnergyPoints(getEnergyPoints() - 1);
		std::cout << getEnergyPoints() << " EnergyPoints left" << std::endl;
	}
}

void	ScavTrap::guardGate()
{
	std::cout << this->getName() << " passes in \033[1;34mGate keeper mode\033[0m." << std::endl;
}