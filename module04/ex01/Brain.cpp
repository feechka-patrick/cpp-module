# include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain is created\n";
}

Brain::Brain(const Brain &obj)
{
	std::cout << "Brain is created\n";
}

Brain& Brain::operator= (const Brain& obj)
{
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain is killed\n";
} 
