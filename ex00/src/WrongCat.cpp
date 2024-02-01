#include "../inc/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal( "Wrong Cat" )
{
    std::cout << getType() << ": Wrong Cat Default Constructor called" << std::endl;
}

WrongCat::WrongCat( const WrongCat &object ) : WrongAnimal( object.getType() )
{
    *this = object;
    std::cout << getType() << ": Wrong Cat Copy Constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << getType() << ": Wrong Cat Default Destructor called" << std::endl;
}

WrongCat& WrongCat::operator=( const WrongCat &object )
{
    (void)object;
    return *this ;
}

void        WrongCat::makeSound( void ) const
{
    std::cout << "*program pretends to meow" << std::endl;
}
