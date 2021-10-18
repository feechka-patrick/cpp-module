# include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog is created\n";
	this->type = "Dog";
}

Dog::Dog(const Dog &obj)
{
	std::cout << "Dog is created\n";
	this->type = "Dog";
}

Dog& Dog::operator= (const Dog& obj)
{
	return (*this);
}

void Dog::makeSound()
{
	std::cout << "Aww..\n";
}

Dog::~Dog()
{
	std::cout << "Dog is killed\n";
} 
