#ifndef DOG_HPP
# define DOG_HPP
# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog: public AAnimal
{
    private:
        Brain*  brain;

    public:
        Dog();
        Dog( const Dog &object );
        ~Dog();
        Dog     &operator=( const Dog &object );
        void    makeSound( void ) const;
        void    think( int i, std::string idea );
        void    speak( int i );
};

#endif