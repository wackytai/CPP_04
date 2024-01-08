#include "../inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type( "wrong generic name" )
{
    std::cout << getType() << ": Wrong Animal Default Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( std::string type ) : _type( type )
{
    std::cout << getType() << ": Wrong Animal Custom Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &object )
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
    _type = object.getType();
    std::cout << getType() << ": Wrong Animal Copy Assignment Operator called" << std::endl;
    return *this;
}

void    WrongAnimal::makeSound( void )
{
    std::cout << "*program plays wrong generic sound*" << std::endl;
}

std::string WrongAnimal::getType( void ) const
{
    return _type;
}
