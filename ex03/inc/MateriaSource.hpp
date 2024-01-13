#pragma once
# include <string>
# include <iostream>
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria*	materia[4];

	public:
		MateriaSource();
		MateriaSource( const MateriaSource& object );
		~MateriaSource();
		MateriaSource& operator=( const MateriaSource& object );
        void learnMateria(AMateria* m);
        AMateria* createMateria(std::string const &type);
};