#include "../inc/Character.hpp"

Character::Character()
{
	for (int i = 0; i < 4; i++)
		inventory[i] = 0;	
}

Character::Character( const std::string name ) : _name( name )
{
	for (int i = 0; i < 4; i++)
		inventory[i] = 0;
}

Character::Character( const Character& object) : _name ( object.getName() )
{
	*this = object;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete inventory[i];
}

Character& Character::operator=( const Character& object )
{
	_name = object.getName();
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
		std::cout  << "no materia to equip" << std::endl;
		return ;
	}
	int i = 0;
	for (;i < 4; i++)
	{
		if (inventory[i] == 0)
			break ;
		if (i == 3 && inventory[i])
		{
			std::cout  << "no slot free" << std::endl;
			return ;
		}
	}
	inventory[i] = m;
	return ;
}

void Character::unequip(int idx)
{
	if (idx < 3 && idx >= 0 && inventory[idx] != 0)
	{
		inventory[idx] = 0;
		std::cout << "materia unequipped" << std::endl;
		return ;
	}
	if (!(idx < 3 && idx >= 0))
		std::cout << "index out of reach" << std::endl;
	else if (inventory[idx] == 0)
		std::cout << "slot empty" << std::endl;
	return ;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 3 && idx >= 0 && inventory[idx] != 0)
	{
		inventory[idx]->use(target);
		return ;
	}
	if (!(idx < 3 && idx >= 0))
		std::cout << "index out of reach" << std::endl;
	else if (inventory[idx] == 0)
		std::cout << "slot empty" << std::endl;
	return ;	
}
