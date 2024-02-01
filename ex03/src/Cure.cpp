#include "../inc/Cure.hpp"

Cure::Cure()
{
    _type = "cure";
}

Cure::Cure( const Cure& object ) : AMateria()
{
    *this = object;
}

Cure::~Cure() {}

Cure&   Cure::operator=( const Cure& object )
{
    _type = object.getType();
    return *this;
}

AMateria* Cure::clone() const
{
    return new Cure();
}

void Cure::use(ICharacter& target)
{
    std::cout <<  "* heals " << target.getName() << "’s wounds *" << std::endl;
}