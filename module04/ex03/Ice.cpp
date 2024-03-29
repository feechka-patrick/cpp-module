#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	//std::cout << "Ice is created\n";
}

Ice::Ice(const Ice &obj)
{
	//std::cout << "Ice is created\n";
}

Ice& Ice::operator= (const Ice& obj)
{
	return (*this);
}

AMateria *Ice::clone() const
{
	return (new Ice());
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << 
		target.getName() << " *\n";
}

Ice::~Ice()
{
	//std::cout << "Ice is killed\n";
} 
