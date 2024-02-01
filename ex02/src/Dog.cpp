#include "../inc/Dog.hpp"

Dog::Dog() : AAnimal( "Dog" )
{
    brain = new Brain();
    std::cout << getType() << ": Dog Default Constructor called" << std::endl;
}

Dog::Dog( const Dog &object ) : AAnimal( object.getType() )
{
    brain = new Brain();
    *brain = *object.brain;
    std::cout << getType() << ": Dog Copy Constructor called" << std::endl;
}

Dog::~Dog()
{
    delete brain;
    std::cout << getType() << ": Dog Default Destructor called" << std::endl;
}

Dog& Dog::operator=( const Dog &object )
{
    *brain = *object.brain;
    return *this ;
}

void    Dog::makeSound( void ) const
{
    std::cout << "*program pretends to bark*" << std::endl;
}

void    Dog::think( int i, std::string idea )
{
    brain->setIdea(i, idea);
}

void    Dog::speak( int i )
{
    std::cout << "That's my idea: " << brain->getIdea(i) << std::endl;
}
