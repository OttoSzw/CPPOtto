#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {

	private:

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
		int			getHitPoints() const;
		int			getEnergyPoints() const;
		int			getAttackDamage() const;
		
		void		setName(const std::string nom);
		void		setHitPoints(const int hit);
		void		setEnergyPoints(const int energy);
		void		setAttackDamage(const int attack);

		void	attack(const std::string& target);
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );
};

#endif