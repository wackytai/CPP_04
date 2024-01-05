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
        Animal( const Animal &object );
        virtual ~Animal();
        Animal                      &operator=( const Animal &object );
        virtual void                makeSound( void ) const;
        void                        setType( std::string type );
        virtual std::string         getType( void ) const;
};

#endif