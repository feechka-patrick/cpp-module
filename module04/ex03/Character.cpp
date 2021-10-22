# include "Character.hpp"

Character::Character(std::string name)
{
	indexEmptySlots = 0;
	this->name = name;
	for (size_t i = 0; i < 4; i++)
		inventory[i] = nullptr;

	//std::cout << "Character is created\n";
}

Character::Character(const Character &obj)
{
	this->name = obj.getName();
	for (size_t i = 0; i < 4; i++)
		inventory[i] = obj.inventory[i];
	indexEmptySlots = obj.indexEmptySlots;
	//std::cout << "Character is created\n";
}

Character& Character::operator= (const Character& obj)
{
	this->name = obj.getName();
	for (size_t i = 0; i < 4; i++)
		inventory[i] = obj.inventory[i];
	indexEmptySlots = obj.indexEmptySlots;
	
	return (*this);
}

std::string const &Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria *m)
{
	if (indexEmptySlots != 4 && m != nullptr)
	{
		inventory[indexEmptySlots] = m;
		indexEmptySlots++;
	}
}

void Character::unequip(int idx)
{
	if (idx > -1 && idx < 4 && inventory[idx] != nullptr)
	{
		for (size_t i = idx; i < 3; i++)
		{
			inventory[i] = inventory[i + 1];
		}
	}
}

void Character::use(int idx, ICharacter &target)
{
	inventory[idx]->use(target);
}

Character::~Character()
{
	for (size_t i = 0; i < 4; i++)
	{
		if (inventory[i] != nullptr)
			delete inventory[i];
	}
	
	//std::cout << "Character is killed\n";
} 
