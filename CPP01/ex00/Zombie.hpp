#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {

	private:
		std::string name;
	public:
		void announce( void );
		std::string getName() const;
		void setName(const std::string Name);
};

#endif