#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>
# include <cstring>

class Brain
{
    private:
        std::string* ideas;

    public:
        Brain();
        Brain( const Brain& object );
        ~Brain();
        Brain  &operator=( const Brain& object );
};

#endif