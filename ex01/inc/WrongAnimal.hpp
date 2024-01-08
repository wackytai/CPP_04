#pragma once
# include <iostream>
# include <cstring>

class WrongAnimal
{
    protected:
        std::string type;
    
    public:
        WrongAnimal();
        WrongAnimal( std::string type );
        WrongAnimal( const WrongAnimal& object );
        ~WrongAnimal();
        WrongAnimal&    operator=( const WrongAnimal& object );
        void            makeSound( void );
        std::string     getType( void ) const;
};
