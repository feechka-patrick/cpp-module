# include "Dog.hpp"

Dog::Dog() : brain(new Brain())
{
	this->type = "Dog";
	std::cout << "Dog is created\n";
}

Dog::Dog(const Dog &obj) : brain(new Brain(*obj.brain))
{
	this->type = "Dog";
	std::cout << "Dog is created\n";
}


Dog& Dog::operator= (const Dog& obj)
{
	(*this->brain).operator=(*(obj.brain));
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "** Aww.. **\n";
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog is killed\n";
} 
