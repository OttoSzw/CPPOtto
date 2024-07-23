#include "Harl.hpp"

void	Harl::debug( void )
{
	std::cout << "\033[1;32m[DEBUG]\033[0m I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "\033[1;34m[INFOS]\033[0m I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger ! If you did, I wouldn't be asking for more !" << std::endl;
}


void	Harl::warning( void )
{
	std::cout << "\033[1;33m[WARNING]\033[0m I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error( void )
{
	std::cout << "\033[1;31m[ERROR]\033[0m This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	int index = 0;
	int	i = 0;
	std::string string_level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	while (i < 4)
	{
		if (level.compare(string_level[i]) == 0)
		{
			index = i;
			break;
		}
		i++;
	}
	switch (index)
	{
		case 0:
			Harl::debug();
		case 1:
			Harl::info();
		case 2:
			Harl::warning();
		case 3:
			Harl::error();
			break;
		default:
			std::cout << "Level unknow" << std::endl;
		return ;
	}
	return ;
}