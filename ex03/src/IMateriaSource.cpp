#include "../inc/IMateriaSource.hpp"

IMateriaSource::IMateriaSource() {}

IMateriaSource::~IMateriaSource() {}

void IMateriaSource::learnMateria(AMateria*)
{

}

AMateria* IMateriaSource::createMateria(std::string const &type)
{
    AMateria*   ptr = new AMateria( type );

    return ptr;
}
