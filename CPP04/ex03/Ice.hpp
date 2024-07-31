#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        Ice(const Ice& copy);
        Ice &operator=(const Ice& ope);
        ~Ice();

        Ice* clone() const;
};

#endif
