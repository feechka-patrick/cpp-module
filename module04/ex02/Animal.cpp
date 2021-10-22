# include "Animal.hpp"

Animal::Animal()
{
	this->type = "Animal";
	std::cout << "Animal is created\n";
}

Animal::Animal(const Animal &obj)
{
	this->type = obj.getType();
	std::cout << "Animal is created\n";
}

Animal& Animal::operator= (const Animal& obj)
{
	this->type = obj.getType();
	return (*this);
}

std::string Animal::getType() const
{
	return (this->type);
}

Animal::~Animal()
{
	std::cout << "Animal is killed\n";
} 
