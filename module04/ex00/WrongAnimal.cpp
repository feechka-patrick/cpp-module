# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal is created\n";
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
	std::cout << "WrongAnimal is created\n";
	this->type = "WrongAnimal";
}

WrongAnimal& WrongAnimal::operator= (const WrongAnimal& obj)
{
	return (*this);
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "** SOUND **\n";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal is killed\n";
} 
