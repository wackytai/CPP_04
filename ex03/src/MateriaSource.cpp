#include "../inc/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		materia[i] = 0;
}

MateriaSource::MateriaSource( const MateriaSource& object )
{
	*this = object;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (materia[i] != 0)
			delete materia[i];
}

MateriaSource& MateriaSource::operator=( const MateriaSource& object )
{
	for (int i = 0; i < 4; i++)
		if (object.materia[i] != 0)
			materia[i] = object.materia[i]->clone();
	return *this;
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (materia[i] == 0)
			materia[i] = m;
		else if (i == 3 && materia[i])
			return ;
	}
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (materia[i] && type == materia[i]->getType())
			return materia[i]->clone();
	}
	std::cout << "Don't know " << type << std::endl;
	return 0;
}
