# include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat is created\n";
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &obj)
{
	std::cout << "WrongCat is created\n";
	this->type = "WrongCat";
}

WrongCat& WrongCat::operator= (const WrongCat& obj)
{
	return (*this);
}

void WrongCat::makeSound()
{
	std::cout << "Mew..\n";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat is killed\n";
} 
