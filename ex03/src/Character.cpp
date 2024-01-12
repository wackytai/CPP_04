#include "../inc/Character.hpp"

Character::Character()
{
	for (int i = 0; i < 4; i++)
		inventory[i] = 0;
	std::cout << getName() << ": Default Constructor called" << std::endl;
}

Character::Character( const std::string name ) : _name( name )
{
	for (int i = 0; i < 4; i++)
		inventory[i] = 0;
	std::cout << getName() << ": Custom Constructor called" << std::endl;
}

Character::Character( const Character& object) : _name ( object.getName() )
{
	*this = object;
	std::cout << getName() << ": Copy Constructor called" << std::endl;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i])
			delete inventory[i];
	}
	std::cout << getName() << ": Destructor called" << std::endl;
}

Character& Character::operator=( const Character& object )
{
	_name = object.getName();
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i])
		{
			delete inventory[i];
			inventory[i] = 0;
		}
	}
	for (int i = 0; i < 4; i++)
		inventory[i] = object.inventory[i]->clone();
	return *this;
}

std::string const & Character::getName() const
{
	return _name;
}

void Character::equip(AMateria* m)
{
	if (m == 0)
	{
		std::cout  << "Can't equip an empty materia" << std::endl;
		return ;
	}
	int i = 0;
	for (;i < 4; i++)
	{
		if (inventory[i] == 0)
			break ;
		if (i == 3 && inventory[i])
		{
			std::cout << "Can't equip " << m->getType() << ": No empty slots" << std::endl;
			return ;
		}
	}
	inventory[i] = m;
	std::cout << m->getType() << ": Materia equipped!" << std::endl;
	return ;
}

void Character::unequip(int idx)
{
	if (idx < 3 && idx >= 0 && inventory[idx] != 0)
	{
		inventory[idx] = 0;
		std::cout << inventory[idx]->getType() << ": Materia unequipped" << std::endl;
		return ;
	}
	if (!(idx < 3 && idx >= 0))
		std::cout << "Can't unequip: Index out of reach" << std::endl;
	else if (inventory[idx] == 0)
		std::cout << "Can't unequip: Empty slot" << std::endl;
	return ;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 3 && idx >= 0 && inventory[idx] != 0)
	{
		inventory[idx]->use(target);
		std::cout << inventory[idx]->getType() << ": "
		return ;
	}
	if (!(idx < 3 && idx >= 0))
		std::cout << "Can't use materia: Index out of reach" << std::endl;
	else if (inventory[idx] == 0)
		std::cout << "Can't use materia: Empty slot" << std::endl;
	return ;	
}
