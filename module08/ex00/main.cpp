#include "easyfind.hpp"
#include <vector>
#include <list>

int main()
{
	{
		std::vector<int> v = {1, 2, 3, 4, 5};

		std::vector<int>::iterator it = easyfind(v, 4);
		for ( ; it != v.end(); ++it)
			std::cout << *it << std::endl;

		it = easyfind(v, 10);
		for ( ; it != v.end(); ++it)
			std::cout << *it << std::endl;
	}

	{
		std::list<int> v = {1, 2, 3, 4, 5};
	
		std::list<int>::iterator it = easyfind(v, 4);
		for ( ; it != v.end(); ++it)
			std::cout << *it << std::endl;

		it = easyfind(v, 10);
		for ( ; it != v.end(); ++it)
			std::cout << *it << std::endl;
	}
}