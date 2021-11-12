#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	std::cout << "mstack top " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "mstack size " << mstack.size() << std::endl;

	{
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		std::cout << "iterator: ";

		++it;
		--it;

		while (it != ite)
		{
			std::cout << *it << " ";
			++it;
		}

		std::cout << std::endl;
	}
	
	{
		MutantStack<int>::const_iterator it = mstack.cbegin();
		MutantStack<int>::const_iterator ite = mstack.cend();
		std::cout << "const_iterator: ";

		++it;
		--it;

		while (it != ite)
		{
			std::cout << *it << " ";
			++it;
		}

		std::cout << std::endl;
	}

	{
		MutantStack<int>::reverse_iterator it = mstack.rbegin();
		MutantStack<int>::reverse_iterator ite = mstack.rend();
		std::cout << "reverse_iterator: ";

		++it;
		--it;

		while (it != ite)
		{
			std::cout << *it << " ";
			++it;
		}

		std::cout << std::endl;
	}

	{
		MutantStack<int>::const_reverse_iterator it = mstack.crbegin();
		MutantStack<int>::const_reverse_iterator ite = mstack.crend();
		std::cout << "const_reverse_iterator: ";

		++it;
		--it;

		while (it != ite)
		{
			std::cout << *it << " ";
			++it;
		}

		std::cout << std::endl;
	}
	
	std::stack<int> s(mstack);

	std::cout << "stack top " << mstack.top() << std::endl;
	std::cout << "stack size " << mstack.size() << std::endl;

	return 0;
}