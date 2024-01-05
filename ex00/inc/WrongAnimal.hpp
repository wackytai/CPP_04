#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <cstring>

class Animal
{
    protected:
        std::string type;
    
    public:
        Animal();
        Animal( std::string type );
        Animal( const Animal& object );
        ~Animal();
        void        makeSound( void );
        std::string getType( void ) const;
};

#endif