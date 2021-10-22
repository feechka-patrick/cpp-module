# include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat is created\n";
	this->type = "Cat";
}

Cat::Cat(const Cat &obj)
{
	std::cout << "Cat is created\n";
	this->type = "Cat";
}

Cat& Cat::operator= (const Cat& obj)
{
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "** Mew.. **\n";
}

Cat::~Cat()
{
	std::cout << "Cat is killed\n";
} 
