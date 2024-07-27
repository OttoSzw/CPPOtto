#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap Instance("Otto");

	Instance.guardGate();
	Instance.highFiveGuys();
	Instance.takeDamage(21);
	Instance.attack("Yourself");
	Instance.whoAmI();
	return (0);
}