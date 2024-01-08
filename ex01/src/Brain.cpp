#include "../inc/Brain.hpp"

Brain::Brain()
{
    ideas = new std::string[100];
    std::cout << "Brain Default Constructor called" << std::endl;
}

Brain::Brain( const Brain& object )
{
    *this = object;
    std::cout << "Brain Copy Constructor called" << std::endl;
}

Brain::~Brain()
{
    delete[] ideas;
    std::cout << "Brain Default Destructor called" << std::endl;
}

Brain&  Brain::operator=( const Brain& object )
{
    if (ideas != nullptr && ideas[0].length() > 0)
    {
        delete[] ideas;
        ideas = nullptr;
    }
    ideas = new std::string[100];
    for (int i = 0; i < 100; i++)
        ideas[i] = object.ideas[i];
    return *this ;
}
