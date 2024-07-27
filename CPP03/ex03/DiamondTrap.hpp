#ifndef DIAMONDTrapTRAP_HPP
#define DIAMONDTrapTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string _name;

	public:
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap& copy);
		~DiamondTrap();

		DiamondTrap	&operator=(const DiamondTrap& ope);
		void		whoAmI() ;
};

#endif