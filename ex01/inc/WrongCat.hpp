#pragma once
# include "WrongAnimal.hpp"

class Cat: public WrongAnimal
{
    public:
        Cat();
        Cat( std::string type );
        Cat( const Cat &object );
        ~Cat();
        Cat         &operator=( const Cat &object );
        void        makeSound( void ) const;
};
