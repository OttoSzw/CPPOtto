#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <sstream>

class Zombie
{
	private:

		std::string name;

	public:
		Zombie();
		~Zombie();

		void announce( void );
		std::string getName() const;
		void setName(const std::string Name);
		int convert_string_to_int(std::string str);
};

Zombie* zombieHorde( int N, std::string name );
#endif