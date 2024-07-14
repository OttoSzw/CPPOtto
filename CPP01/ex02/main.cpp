#include <iostream>

int	main()
{
	std::string brain = "HI THIS IS BRAIN";
	std::string* stringPTR = &brain;
	std::string& stringREF = brain;

	std::cout << "L'adresse de brain : " << &brain << std::endl;
	std::cout << "L'adresse du pointeur sur brain : " << stringPTR << std::endl;
	std::cout << "L'adresse de la reference sur brain : " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "La valeur de brain : " << brain << std::endl;
	std::cout << "La valeur du pointeur sur brain : " << *stringPTR << std::endl;
	std::cout << "La valeur de la reference sur brain : " << stringREF << std::endl;
	return (0);
}