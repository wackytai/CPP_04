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
	{
		std::cout << "Can't learn empty materia!" << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (materia[i] == 0)
			materia[i] = m;
		else if (i == 3 && materia[i])
		{
			std::cout << "No room to learn materia!" << std::endl;
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (materia[i] && type == materia[i]->getType())
			return materia[i]->clone();
	}
	std::cout << "Can't create " << type << ": no knowledge!" << std::endl;
	return 0;
}