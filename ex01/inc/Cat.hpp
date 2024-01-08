#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
    private:
        Brain*  brain;

    public:
        Cat();
        Cat( std::string type );
        Cat( const Cat &object );
        ~Cat();
        Cat         &operator=( const Cat &object );
        void        makeSound( void ) const;
};

#endif