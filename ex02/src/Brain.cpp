#include "../inc/Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default Constructor called" << std::endl;
}

Brain::Brain( const Brain& object )
{
    *this = object;
    std::cout << "Brain Copy Constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain Default Destructor called" << std::endl;
}

Brain&  Brain::operator=( const Brain& object )
{
    for (int i = 0; i < 100; i++)
        ideas[i] = object.ideas[i];
    return *this ;
}
