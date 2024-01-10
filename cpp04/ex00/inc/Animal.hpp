#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <cstring>

class Animal
{
    protected:
        const std::string type;
    
    public:
        Animal();
        Animal( std::string type );
        Animal( const Animal &object );
        virtual ~Animal();
        Animal          &operator=( const Animal &object );
        virtual void    makeSound( void ) const;
        std::string     getType( void ) const;
};

#endif