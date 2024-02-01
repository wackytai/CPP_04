#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP
# include "AMateria.hpp"
# include <string>

class AMateria;

class IMateriaSource
{
    public:
        virtual ~IMateriaSource() {};
        virtual void learnMateria(AMateria* m) = 0;
        virtual AMateria* createMateria(std::string const &type) = 0;
};

#endif