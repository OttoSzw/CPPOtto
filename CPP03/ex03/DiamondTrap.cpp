#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name)
		: ClapTrap(name + "_clapname"), ScavTrap(name), FragTrap(name), _name(name)
{
	std::cout << "DiamondTrap " << name << " constructor called !" << std::endl;
	this->_name = name;
	this->HitPoints = FragTrap::HitPoints;
	this->EnergyPoints = ScavTrap::EnergyPoints;
	this->AttackDamage = FragTrap::AttackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy) : ClapTrap(copy), ScavTrap(copy), FragTrap(copy), _name(copy._name)
{
	std::cout << "DiamondTrap copy constructor called !" << std::endl;
	this->HitPoints = copy.HitPoints;
	this->EnergyPoints = copy.EnergyPoints;
	this->AttackDamage = copy.AttackDamage;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called !" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap& ope)
{
	if (this != &ope)
	{
		this->_name = ope.getName();
		this->HitPoints = ope.getHitPoints();
		this->EnergyPoints = ope.getEnergyPoints();
		this->AttackDamage = ope.getAttackDamage();
	}
	return (*this);
}

void 	DiamondTrap::whoAmI(void)
{
	std::cout << " Hiii my name is " << this->_name << " and my ClapTrap name is " << ClapTrap::Name << std::endl;
}