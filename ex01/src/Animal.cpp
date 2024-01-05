#include "../inc/Animal.hpp"

Animal::Animal() : type( "generic name" )
{
    std::cout << getType() << "Animal Default Constructor called" << std::endl;
}

Animal::Animal( std::string type ) : type( type )
{
    std::cout << getType() << "Animal Custom Constructor called" << std::endl;
}

Animal::Animal( const Animal &object )
{
    *this = object;
    std::cout << getType() << "Animal Copy Constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << getType() << "Animal Default Destructor called" << std::endl;
}

Animal      Animal&::operator=( const Animal &object )
{
    setType(object.getType());
    std::cout << getType() << "Animal Copy Assignment Operator called" << std::endl;
    return *this;
}

void    Animal::makeSound( void ) const
{
    std::cout << *program plays generic sound* << std::endl;
}

void    Animal::setType( std::string type )
{
    this->type = type;
}

std::string Animal::getType( void ) const
{
    return type;
}
