
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
	{
		Weapon club = Weapon("Knife");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("Gun");
		bob.attack();
	}
	{
		Weapon club = Weapon("Katana");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("Machine gun");
		jim.attack();
	}
}