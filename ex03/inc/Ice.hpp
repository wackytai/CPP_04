#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <iostream>

class Ice : public AMateria
{
    public:
        Ice();
        Ice( const Ice& object );
        ~Ice();
        Ice&   operator=( const Ice& object );
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif