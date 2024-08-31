#include "easyfind.hpp"
#include <vector>

int main()
{
	std::vector<int> tab;
	std::vector<int>::iterator it;

	std::cout << "\033[38;2;255;165;0m Bienvenu(e) !\033[0m" << std::endl;

	std::cout << std::endl;
	for (int i = 1; i < 20; i++)
	{
		tab.push_back(i);
		std::cout << tab[i - 1] << ", ";
	}
	std::cout << std::endl;
	

	int result = easyfind(tab, 4);

	std::cout << std::endl;
	std::cout << "L'element cherche est 4 ! " << std::endl;
	if (result != 0)
	{
		std::cout << "\033[1;32mL'element trouve est : \033[0m" << result << std::endl;
	}
	else
	{
		std::cout << "\033[1;31mL'element n'a pas ete trouve dans le vecteur.\033[0m" << std::endl;
	}
	std::cout << std::endl;
	std::cout << "\033[38;2;255;165;0m Desormais on accede a l element 6 de notre liste (via l'operateur[]) : \033[0m" << std::endl;
	int	&i = tab[5];
	std::cout << std::endl;
	std::cout << "Notre element a pour valeur : " << i << std::endl;
	i = 100;
	std::cout << "Puis nous le modifions en retournant i, une reference a l'element a l'index specifie, l'element 6 de notre liste vaut desormais : " << tab[5] << std::endl;

	std::cout << std::endl;
	std::cout << "\033[38;2;255;165;0m Nous allons gerer l erreur d'index grace a .at() :\033[0m" << std::endl;
	std::cout << std::endl;
	try
	{
		int value = tab.at(50);
		std::cout << "Valeur de l'element à index 5 : " << value << std::endl;
	}
	catch (const std::exception &e)
	{
        std::cerr << "Exception : " << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "\033[38;2;255;165;0m Maintenant la command front() : \033[0m" << std::endl;
	std::cout << std::endl;
	int& first = tab.front();
    std::cout << "Premier element : " << first << std::endl;
    
    first = 18;
    std::cout << "Après modification : " << tab[0] << std::endl;

	std::cout << std::endl;
	std::cout << "\033[38;2;255;165;0m Maintenant la command back() : \033[0m" << std::endl;
	std::cout << std::endl;
	int& last = tab.back();
    std::cout << "Dernier element : " << last << std::endl;
    
    last = -42;
    std::cout << "Après modification : " << tab[18] << std::endl;

	std::cout << std::endl;
	std::cout << "\033[38;2;255;165;0m Liste apres changement : \033[0m" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	for (int i = 1; i < 20; i++)
	{
		tab.push_back(i);
		std::cout << tab[i - 1] << ", ";
	}
	std::cout << std::endl;
	return (0);
}