#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &typeweapon) : name(name), weapon(typeweapon)
{
	std::cout << "HumanA take his weapon.." << std::endl;
	return ;
}

HumanA::~HumanA()
{
	std::cout << "HumanA drop his weapon.." << std::endl;
}

void	HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}