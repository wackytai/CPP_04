#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <cstring>

class Animal
{
    protected:
        const std::string _type;
    
    public:
        Animal();
        Animal( std::string type );
        Animal( const Animal &object );
        virtual ~Animal();
        Animal          &operator=( const Animal &object );
        std::string     getType( void ) const;
        virtual void    makeSound( void ) const;
};

#endif