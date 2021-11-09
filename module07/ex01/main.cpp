#include "iter.hpp"

void fint(int &i)
{
	i++;
}

int main()
{
	int array_int[] = {1, 2, 3, 4, 5, 6};
	std::cout << "array:";
	for (size_t i = 0; i < 6; i++)
	{
		std::cout << " " << array_int[i];
	}
	iter(array_int, 6, &fint);
	std::cout << "\narray after iter:";
	for (size_t i = 0; i < 6; i++)
	{
		std::cout << " " << array_int[i];
	}
	std::cout << "\n";
}