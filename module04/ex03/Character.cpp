# include "Character.hpp"

Character::Character(std::string name)
{
	indexEmptySlots = 0;
	std::cout << "Character is created\n";
}

Character::Character(const Character &obj)
{
	std::cout << "Character is created\n";
}

Character& Character::operator= (const Character& obj)
{
	return (*this);
}

std::string const &Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria *m)
{
	inventory[indexEmptySlots] = m;
	indexEmptySlots++;
}

void Character::unequip(int idx)
{
	idx++;
	//?
}

void Character::use(int idx, ICharacter &target)
{
	inventory[idx]->use(target);
}

Character::~Character()
{
	std::cout << "Character is killed\n";
} 
