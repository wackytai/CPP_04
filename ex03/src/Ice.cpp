#include "../inc/Ice.hpp"

Ice::Ice() : AMateria( "ice" )
{
    _type = "ice";
}

Ice::Ice( const Ice& object ) : AMateria( "ice" )
{
    *this = object;
}

Ice::~Ice() {}

Ice&   Ice::operator=( const Ice& object )
{
    _type = object.getType();
    return *this;
}

AMateria* Ice::clone() const
{
    return new Ice();
}

void Ice::use(ICharacter& target)
{
    std::cout <<  "ice shoots ice bolt at " << target.getName() << std::endl;
}