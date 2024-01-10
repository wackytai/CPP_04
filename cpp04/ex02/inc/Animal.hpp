#ifndef AANIMAL_HPP
# define AANIMAL_HPP
# include <iostream>
# include <cstring>

class AAnimal
{
    protected:
        const std::string type;
    
    public:
        AAnimal();
        AAnimal( std::string type );
        AAnimal( const Animal& object );
        virtual ~AAnimal();
        AAnimal          &operator=( const AAnimal &object );
        virtual void    makeSound( void ) const = 0;
        std::string     getType( void ) const;
};

#endif