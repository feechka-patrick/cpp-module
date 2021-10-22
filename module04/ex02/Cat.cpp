# include "Cat.hpp"

Cat::Cat() : brain(new Brain())
{
	this->type = "Cat";
	std::cout << "Cat is created\n";
}

Cat::Cat(const Cat &obj) : brain(new Brain(*obj.brain))
{
	this->type = "Cat";
	std::cout << "Cat is created\n";
}


Cat& Cat::operator= (const Cat& obj)
{
	(*this->brain).operator=(*(obj.brain));
	return (*this);
}


void Cat::makeSound() const
{
	std::cout << "** Mew.. **\n";
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat is killed\n";
} 
