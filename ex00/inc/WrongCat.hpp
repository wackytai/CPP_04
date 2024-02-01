#pragma once
# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
    public:
        WrongCat();
        WrongCat( const WrongCat &object );
        ~WrongCat();
        WrongCat    &operator=( const WrongCat &object );
        void        makeSound( void ) const;
};
