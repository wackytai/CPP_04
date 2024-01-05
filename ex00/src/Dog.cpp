#include "../inc/Dog.hpp"

Dog::Dog()
{
    std::cout << getType() << "Dog Default Constructor called" << std::endl;
}

Dog::Dog( std::string type ) : Animal(type)
{
    std::cout << getType() << "Dog Custom Constructor called" << std::endl;
}

Dog::Dog( const Dog &object ) : Animal()
{
    *this = object;
    std::cout << getType() << "Dog Copy Constructor called" << std::endl;
}

Dog::~Dog()
{
    std::cout << getType() << "Dog Default Destructor called" << std::endl;
}

Dog Dog&::operator=( const Dog &object )
{
    setType(object.getType());
    return *this ;
}

void    Dog::makeSound( void ) const
{
    std::cout << *program pretends to bark* << std::endl;
}