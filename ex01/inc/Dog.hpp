#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
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