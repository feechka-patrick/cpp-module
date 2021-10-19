#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#define N 2
int main()
{
	Animal *animals[N];

	for (size_t i = 0; i < N; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}

	std::cout << std::endl;
	for (size_t i = 0; i < N; i++)
		delete animals[i];
	
}