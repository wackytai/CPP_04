#include "../inc/Cat.hpp"

Cat::Cat() : Animal( "generic cat name" )
{
    brain = new Brain();
    std::cout << getType() << ": Cat Default Constructor called" << std::endl;
}

Cat::Cat( std::string type ) : Animal( type )
{
    brain = new Brain();
    std::cout << getType() << ": Cat Custom Constructor called" << std::endl;
}

Cat::Cat( const Cat &object ) : Animal( object.getType() )
{
    *this = object;
    std::cout << getType() << ": Cat Copy Constructor called" << std::endl;
}

Cat::~Cat()
{
    //brain->~Brain();
    delete brain;
    brain = nullptr;
    std::cout << getType() << ": Cat Default Destructor called" << std::endl;
}

Cat& Cat::operator=( const Cat &object )
{    
    if (brain == nullptr)
        brain = new Brain();
    for (int i = 0; i < 100; i++)
        brain->ideas[i] = object.brain->ideas[i];
    return *this ;
}

void    Cat::makeSound( void ) const
{
    std::cout << "*program pretends to meow*" << std::endl;
}