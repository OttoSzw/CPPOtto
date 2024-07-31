#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int main()
{
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter *Otto = new Character("Otto");
	AMateria *tmp;

	tmp = src->createMateria("ice");
	Otto->equip(tmp);

	tmp = src->createMateria("cure");
	Otto->equip(tmp);

	ICharacter *bob = new Character("bob");

	Otto->use(0, *bob);
	Otto->use(1, *bob);

	delete bob;
	delete Otto;
	delete src;

	return 0;
}
