#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP
# include "AMateria.hpp"

class ICharacter
{
    protected:
        std::string const   _name;
        int                 inventory[3];

    public:
        ICharacter();
        ICharacter( std::string const &name );
        ICharacter( const ICharacter &object );
        virtual ~ICharacter();
        ICharacter& operator=(const ICharacter &object);
        virtual std::string const & getName() const = 0;
        virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0;
};


#endif