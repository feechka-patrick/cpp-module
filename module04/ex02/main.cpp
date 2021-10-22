#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#define NUMBER_OF_ANIMALS 2

int	main( void )
{
	Animal	*animals[NUMBER_OF_ANIMALS];
	

	// Animal *animal = new Animal();

	for (int i = 0; i < NUMBER_OF_ANIMALS; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		std::cout << "-> " << animals[i]->getType() << std::endl;
	}

	animals[0]->makeSound();
	animals[1]->makeSound();


	for (int i = 0; i < NUMBER_OF_ANIMALS; i++)
		delete animals[i];
}