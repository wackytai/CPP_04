#include "../inc/Dog.hpp"

Dog::Dog() : Animal( "Dog" )
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
    delete brain;
    brain = 0;
    std::cout << getType() << ": Dog Default Destructor called" << std::endl;
}

Dog& Dog::operator=( const Dog &object )
{
    if (brain == 0)
        brain = new Brain();
    for (int i = 0; i < 100; i++)
        brain->setIdea(i, object.brain->getIdea(i));
    return *this ;
}

void    Dog::makeSound( void ) const
{
    std::cout << "*program pretends to bark*" << std::endl;
}