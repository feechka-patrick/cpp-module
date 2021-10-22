# include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	//std::cout << "MateriaSource is created\n";
	this->indexMateria = 0;
	for (size_t i = 0; i < 4; i++)
		learnedMaterias[i] = NULL;
}


MateriaSource& MateriaSource::operator= (const MateriaSource& obj)
{
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
	learnedMaterias[indexMateria] = m;
	indexMateria++;
	indexMateria %= 4;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (type == learnedMaterias[i]->getType())
			return (learnedMaterias[i]->clone());
	}
	return (0);
}

MateriaSource::~MateriaSource()
{
	for (size_t i = 0; i < 4; i++)
	{
		if (learnedMaterias[i])
			delete learnedMaterias[i];
	}
	
	//std::cout << "MateriaSource is killed\n";
} 
