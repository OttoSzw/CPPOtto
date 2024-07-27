#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap " << name << " constructor called !" << std::endl;
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	this->setName(name);
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy)
{
	this->setHitPoints(copy.getHitPoints());
	this->setEnergyPoints(copy.getEnergyPoints());
	this->setAttackDamage(copy.getAttackDamage());
	this->setName(copy.getName());
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called !" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap& ope)
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

void	FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap " << this->getName() << " want to \033[1;33mhighFive\033[0m you ! 🙌" << std::endl;
}