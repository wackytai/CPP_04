#include "../inc/Dog.hpp"

Dog::Dog() : Animal( "generic dog name" )
{
    brain = new Brain();
    std::cout << getType() << ": Dog Default Constructor called" << std::endl;
}

Dog::Dog( std::string type ) : Animal( type )
{
    brain = new Brain();
    std::cout << getType() << ": Dog Custom Constructor called" << std::endl;
}

Dog::Dog( const Dog &object ) : Animal( object.getType() )
{
    *this = object;
    std::cout << getType() << ": Dog Copy Constructor called" << std::endl;
}

Dog::~Dog()
{
    //brain->~Brain();
    delete brain;
    brain = nullptr;
    std::cout << getType() << ": Dog Default Destructor called" << std::endl;
}

Dog& Dog::operator=( const Dog &object )
{
    if (brain == nullptr)
        brain = new Brain();
    for (int i = 0; i < 100; i++)
        brain->ideas[i] = object.brain->ideas[i];
    return *this ;
}

void    Dog::makeSound( void ) const
{
    std::cout << "*program pretends to bark*" << std::endl;
}