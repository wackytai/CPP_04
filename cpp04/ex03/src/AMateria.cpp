#include "../inc/AMateria.hpp"

AMateria::AMateria() : _type( "" ) {}

AMateria::AMateria( std::string const &type ) : _type( type ) {}

AMateria::~AMateria() {}

std::string const& AMateria::getType() const 
{
    return _type;
}

AMateria* AMateria::clone() const
{
    AMateria*   ptr = new AMateria();

    return ptr;
}

void    AMateria::use(ICharacter& target)
{
    std::cout << "* prints materia usage  at *" << target.getName() << std::endl;
}
