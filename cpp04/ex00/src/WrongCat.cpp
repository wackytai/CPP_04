#include "../inc/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal( "wrong generic cat name" )
{
    std::cout << getType() << ": Wrong Cat Default Constructor called" << std::endl;
}

WrongCat::WrongCat( std::string type ) : WrongAnimal(type)
{
    std::cout << getType() << ": Wrong Cat Custom Constructor called" << std::endl;
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
    return *this ;
}

void        WrongCat::makeSound( void ) const
{
    std::cout << "*program pretends to meow" << std::endl;
}
