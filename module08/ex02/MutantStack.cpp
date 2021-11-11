# include "MutantStack.hpp"

MutantStack::MutantStack()
{
	std::cout << "MutantStack is created\n";
}

MutantStack::MutantStack(const MutantStack &obj)
{
	std::cout << "MutantStack is created\n";
}

MutantStack& MutantStack::operator= (const MutantStack& obj)
{
	return (*this);
}

MutantStack::~MutantStack()
{
	std::cout << "MutantStack is killed\n";
} 
