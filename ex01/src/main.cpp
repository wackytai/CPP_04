#include "../inc/Animal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"

int main()
{
	{
		std::cout << "Subject main\n";
		const Animal* j = new Dog();
		const Animal* i = new Cat();
	
		delete j;//should not create a leak
		delete i;
	}
	{
		std::cout << "\nDeep copy and ideas\n";
		Dog	Max = Dog();
		
		std::cout << "Max ideas\n";
		Max.think(0, "Burglars");
		Max.think(1, "Food");
		Max.speak(0);
		Max.speak(1);
		
		Dog	Rex(Max);
		
		std::cout << "Rex copies ideas\n";
		Rex.speak(0);
		Rex.speak(1);
		std::cout << "Max new ideas\n";
		Max.think(0, "Sniffing");
		Max.think(1, "Sleep");
		Max.speak(0);
		Max.speak(1);
		std::cout << "Rex ideas\n";
		Rex.speak(0);
		Rex.speak(1);

		Cat	Salem = Cat();
		
		std::cout << "Salem idea\n";
		Salem.think(0, "Knocking thing off table");
		Salem.speak(0);
		
		Cat	Sylvester;
		Sylvester = Salem;
		std::cout << "Sylvester copies idea\n";
		Sylvester.speak(0);
		std::cout << "Sylvester new idea\n";
		Sylvester.think(0, "Tweety");
		Sylvester.speak(0);
		std::cout << "Salem idea\n";
		Salem.speak(0);
	}
	{
		std::cout << "\nMy main\n";
		int		i = 0;
		int		size = 2;
		Animal	*playground[2];

		for (; i < size / 2; i++)
			playground[i] = new Dog();
		for (; i < size; i++)
			playground[i] = new Cat();
		for (i = 0; i < size; i++)
			playground[i]->makeSound();
		for (i = 0; i < size; i++)
			delete playground[i];
	}
}