#include "ClapTrap.hpp"

int	main()
{
	ClapTrap Instance("Otto");

	Instance.attack("Tom");
	Instance.takeDamage(0);
	Instance.beRepaired(2);
}