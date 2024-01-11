#include "../inc/Cat.hpp"

Cat::Cat() : Animal( "Cat" )
{
    std::cout << getType() << ": Cat Default Constructor called" << std::endl;
}

Cat::Cat( std::string type ) : Animal( type )
{
    std::cout << getType() << ": Cat Custom Constructor called" << std::endl;
}

Cat::Cat( const Cat &object ) : Animal( object.getType() )
{
    *this = object;
    std::cout << getType() << ": Cat Copy Constructor called" << std::endl;
}

Cat::~Cat()
{
    std::cout << getType() << ": Cat Default Destructor called" << std::endl;
}

Cat& Cat::operator=( const Cat &object )
{
    return *this ;
}

void    Cat::makeSound( void ) const
{
    std::cout << "*program pretends to meow*" << std::endl;
}