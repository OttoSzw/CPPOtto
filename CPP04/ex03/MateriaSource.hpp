#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *materias[4];

	public:
		MateriaSource();
		MateriaSource(const MateriaSource& copy);
		MateriaSource &operator=(const MateriaSource& ope);
		~MateriaSource();

		void learnMateria(AMateria *m);
		AMateria *createMateria(std::string const &type);
};

#endif
