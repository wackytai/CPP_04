#include "../inc/Dog.hpp"

Dog::Dog() : Animal( "generic dog name" )
{
    std::cout << getType() << ": Dog Default Constructor called" << std::endl;
}

Dog::Dog( std::string type ) : Animal( type )
{
    std::cout << getType() << ": Dog Custom Constructor called" << std::endl;
}

Dog::Dog( const Dog &object ) : Animal( object.getType() )
{
    *this = object;
    std::cout << getType() << ": Dog Copy Constructor called" << std::endl;
}

Dog::~Dog()
{
    std::cout << getType() << ": Dog Default Destructor called" << std::endl;
}

Dog& Dog::operator=( const Dog &object )
{
    return *this ;
}

void    Dog::makeSound( void ) const
{
    std::cout << "*program pretends to bark*" << std::endl;
}