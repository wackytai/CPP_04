#include "../inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type( "generic name" )
{
    std::cout << getType() << ": Wrong Animal Default Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( std::string type ) : type( type )
{
    std::cout << getType() << ": Wrong Animal Custom Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &object ) : type( object.getType() )
{
    *this = object;
    std::cout << getType() << ": Wrong Animal Copy Constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << getType() << ": Wrong Animal Default Destructor called" << std::endl;
}

WrongAnimal&      WrongAnimal::operator=( const WrongAnimal &object )
{
    std::cout << getType() << ": Wrong Animal Copy Assignment Operator called" << std::endl;
    return *this;
}

void    WrongAnimal::makeSound( void ) const
{
    std::cout << "*program plays wrong generic sound*" << std::endl;
}

std::string WrongAnimal::getType( void ) const
{
    return type;
}
