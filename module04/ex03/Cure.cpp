# include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure is created\n";
}

// Cure::Cure(const Cure &obj)
// {
// 	std::cout << "Cure is created\n";
// }

// Cure& Cure::operator= (const Cure& obj)
// {
// 	return (*this);
// }

AMateria *Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() 
		<< "’s wounds *\n";
}

Cure::~Cure()
{
	std::cout << "Cure is killed\n";
} 
