# include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain is created\n";
}

Brain::Brain(const Brain &obj)
{
	for (size_t i = 0; i < this->ideas->size(); i++)
		this->ideas[i] = obj.ideas[i];

	std::cout << "Brain is created\n";
}

Brain& Brain::operator= (const Brain& obj)
{
	for (size_t i = 0; i < this->ideas->size(); i++)
		this->ideas[i] = obj.ideas[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain is killed\n";
} 
