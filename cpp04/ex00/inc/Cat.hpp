#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class Cat: public Animal
{
    public:
        Cat();
        Cat( std::string type );
        Cat( const Cat &object );
        ~Cat();
        Cat     &operator=( const Cat &object );
        void    makeSound( void ) const;
};

#endif