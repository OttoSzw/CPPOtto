#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
	
		ScavTrap(std::string name);
		ScavTrap( const ScavTrap& copy);
		~ScavTrap();

		ScavTrap &operator=( const ScavTrap& ope);
		void	guardGate();
		void	attack(const std::string& target);
};

#endif