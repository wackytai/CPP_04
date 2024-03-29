#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>
# include <cstring>

class Brain
{
    private:
        std::string ideas[100];

    public:
        Brain();
        Brain( const Brain& object );
        ~Brain();
        Brain       &operator=( const Brain& object );
        std::string getIdea( int i ) const;
        void        setIdea( int i, std::string newIdea );
};

#endif