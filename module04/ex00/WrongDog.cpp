# include "WrongDog.hpp"

WrongDog::WrongDog()
{
	std::cout << "WrongDog is created\n";
	this->type = "WrongDog";
}

WrongDog::WrongDog(const WrongDog &obj)
{
	std::cout << "WrongDog is created\n";
	this->type = "WrongDog";
}

WrongDog& WrongDog::operator= (const WrongDog& obj)
{
	return (*this);
}

void WrongDog::makeSound()
{
	std::cout << "Aww..\n";
}

WrongDog::~WrongDog()
{
	std::cout << "WrongDog is killed\n";
} 
