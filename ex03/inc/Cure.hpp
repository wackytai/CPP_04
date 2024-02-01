#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <string>

class ICharacter;

class Cure : public AMateria
{
    public:
        Cure();
        Cure( const Cure& object );
        ~Cure();
        Cure&   operator=( const Cure& object );
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif