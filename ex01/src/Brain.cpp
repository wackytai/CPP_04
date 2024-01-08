#include "../inc/Brain.hpp"

Brain::Brain()
{
    ideas = new std::string[100];
    std::cout << "Default Constructor called" std::endl;
}

Brain::Brain( const Brain& object )
{
    *this = object;
    std::cout << "Copy Constructor called" std::endl;
}

Brain::~Brain()
{
    delete ideias[];
    std::cout << "Default Destructor called" std::endl;
}

Brain  Brain&::operator=( const Brain& object )
{
    ideias = new std::string(object.ideas)[100];
    return *this ;
}
