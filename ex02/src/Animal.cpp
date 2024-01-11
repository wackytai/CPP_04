#include "../inc/Animal.hpp"

AAnimal::AAnimal() : _type( "Animal" )
{
    std::cout << getType() << ": Abstract Animal Default Constructor called" << std::endl;
}

AAnimal::AAnimal( std::string type ) : _type( type )
{
    std::cout << getType() << ": Abstract Animal Custom Constructor called" << std::endl;
}

AAnimal::AAnimal( const AAnimal& object ) : _type( object.getType() )
{
    *this = object;
    std::cout << getType() << ": Abstract Animal Copy Constructor called" << std::endl;
}

AAnimal::~AAnimal()
{
    std::cout << getType() << ": Abstract Animal Default Destructor called" << std::endl;
}

AAnimal&      AAnimal::operator=( const AAnimal &object )
{
    std::cout << getType() << ": Abstract Animal Copy Assignment Operator called" << std::endl;
    return *this;
}

void    AAnimal::makeSound( void ) const
{
    std::cout << "*program plays generic abstract sound*" << std::endl;
}

std::string AAnimal::getType( void ) const
{
    return _type;
}
