# include "AMateria.hpp"


AMateria::AMateria(const AMateria &obj)
{
	this->type = obj.getType();
	std::cout << "AMateria is created\n";
}

AMateria& AMateria::operator= (const AMateria& obj)
{
	this->type = obj.getType();
	return (*this);
}

std::string const &AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter &target) { }

AMateria::~AMateria()
{
	std::cout << "AMateria is killed\n";
} 
