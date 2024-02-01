#include "../inc/Cat.hpp"

Cat::Cat() : AAnimal( "Cat" )
{
    brain = new Brain();
    std::cout << getType() << ": Cat Default Constructor called" << std::endl;
}

Cat::Cat( const Cat &object ) : AAnimal( object.getType() )
{
    brain = new Brain();
    *brain = *object.brain;
    std::cout << getType() << ": Cat Copy Constructor called" << std::endl;
}

Cat::~Cat()
{
    delete brain;
    std::cout << getType() << ": Cat Default Destructor called" << std::endl;
}

Cat& Cat::operator=( const Cat &object )
{   
    *brain = *object.brain;
    return *this ;
}

void    Cat::makeSound( void ) const
{
    std::cout << "*program pretends to meow*" << std::endl;
}

void    Cat::think( int i, std::string idea )
{
    brain->setIdea(i, idea);
}

void    Cat::speak( int i )
{
    std::cout << "That's my idea: " << brain->getIdea(i) << std::endl;
}
