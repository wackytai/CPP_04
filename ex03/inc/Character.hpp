#pragma once
# include <string>
# include "ICharacter.hpp"
#include "AMateria.hpp"

class AMateria;

class Character: public ICharacter
{
    private:
        std::string        _name;
        AMateria*          inventory[4];
    
    public:
        Character();
        Character( const std::string name );
        Character( const Character& object);
        ~Character();
        Character& operator=( const Character& object );
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};