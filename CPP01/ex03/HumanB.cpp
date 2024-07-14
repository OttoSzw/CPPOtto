#include "HumanB.hpp"


HumanB::HumanB(std::string name) : name(name)
{
	std::cout << "HumanB take his weapon.." << std::endl;
	return ;
}

HumanB::~HumanB()
{
	std::cout << "HumanB drop his weapon.." << std::endl;
	return ;
}

void	HumanB::attack()
{
	std::cout << this->name << " attacks with their " << (*weapon).getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}