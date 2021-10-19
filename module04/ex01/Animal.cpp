# include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal is created\n";
	this->type = "Animal";
}

Animal::Animal(const Animal &obj)
{
	std::cout << "Animal is created\n";
	this->type = "Animal";
}

Animal& Animal::operator= (const Animal& obj)
{
	return (*this);
}

std::string Animal::getType() const
{
	return (this->type);
}

void Animal::makeSound() const
{
	std::cout << "** SOUND **\n";
}

Animal::~Animal()
{
	std::cout << "Animal is killed\n";
} 
