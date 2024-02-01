#include "../inc/AMateria.hpp"
#include "../inc/Ice.hpp"
#include "../inc/Cure.hpp"
#include "../inc/ICharacter.hpp"
#include "../inc/Character.hpp"
#include "../inc/IMateriaSource.hpp"
#include "../inc/MateriaSource.hpp"

int main()
{
/* 	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");
	
	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	return 0; */
	{
		//MateriaSource tests
		IMateriaSource *src = new MateriaSource();

		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		AMateria *temp1 = new Ice();

		src->learnMateria(temp1);
		src->learnMateria(NULL);

		/* AMateria *temp2;

		temp2 = src->createMateria("Ice"); */

		delete src;
		delete temp1;
		std::cout << std::endl;
	}
	{
		//Character tests
		Character	link = Character("Link");
		IMateriaSource *src = new MateriaSource();

		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		AMateria *temp;
		AMateria *temp2;

		temp = src->createMateria("ice");
		link.equip(temp);
		temp2 = src->createMateria("ice");
		link.equip(temp);
		temp = src->createMateria("cure");
		link.equip(temp);
		temp = src->createMateria("cure");
		link.equip(temp);

		Character zelda(link);

		link.equip(NULL);
		link.equip(temp);
		link.unequip(-1);
		link.unequip(5);
		link.unequip(1);
		link.unequip(3);
		link.use(0, zelda);
		link.use(1, zelda);
		link.use(3, zelda);

		zelda.use(0, link);
		zelda.use(1, link);
		zelda.use(2, link);
		zelda.use(3, link);

		delete temp;
		delete temp2;
		delete src;
	}
}
