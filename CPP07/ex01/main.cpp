#include "iter.hpp"

template <typename T>
void	AOnly(T array)
{
	std::cout << array << std::endl;
	array = "a";
	std::cout << array << std::endl;
}

int main()
{
	std::string Tab[] = {"Yooooo", "ijsdasj", "PPPPPP"};

	::iter(Tab, sizeof(Tab) / sizeof(Tab[0]), AOnly);
	return (0);
}