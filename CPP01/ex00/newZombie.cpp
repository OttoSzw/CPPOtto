#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{	
	Zombie *newz = new Zombie;
	newz->setName(name);
	return (newz);	
}
