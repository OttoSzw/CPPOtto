#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {

	protected:

		std::string Name;
		int	HitPoints;
		int	EnergyPoints;
		int	AttackDamage;
	
	public:

		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& copy);
		ClapTrap &operator=(const ClapTrap& other);
		~ClapTrap();

		std::string getName() const;
		void		setName(const std::string nom);
		int			getHitPoints() const;
		void		setHitPoints(const int hit);
		int			getEnergyPoints() const;
		void		setEnergyPoints(const int energy);
		int			getAttackDamage() const;
		void		setAttackDamage(const int attack);

		void	attack(const std::string& target);
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );
};

#endif