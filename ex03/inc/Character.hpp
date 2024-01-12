#pragma once
# include <cstring>
# include "ICharacter.hpp"

class Character
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