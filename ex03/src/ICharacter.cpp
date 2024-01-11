#include "../inc/ICharacter.hpp"

ICharacter::ICharacter() : _name( "" )
{

}

ICharacter::ICharacter( std::string const &name) : _name( name )
{

}

ICharacter::ICharacter( const ICharacter &object )
{

}

ICharacter::~ICharacter() {}

ICharacter& ICharacter::operator=(const ICharacter &object)
{

}

std::string const & ICharacter::getName() const
{

}

void ICharacter::equip(AMateria* m)
{

}

void ICharacter::unequip(int idx)
{

}

void ICharacter::use(int idx, ICharacter& target)
{

}
