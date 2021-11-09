#include "Array.hpp"
#include <cstdlib>
#define MAX_VAL 750

int main()
{
	{
		Array<int> ar;
		std::cout << "size: " << ar.size() 
			<< "\n\n";

		Array<int> ar1(10);
		std::cout << "size: " << ar1.size() 
			<< "\n";

		for (size_t i = 0; i < ar1.size(); i++)
			ar1[i] = i + 1;

		std::cout << "array:";
		for (size_t i = 0; i < ar1.size(); i++)
			std::cout << " " << ar1[i];
		std::cout << "\n\n";

		Array<int> ar2 = ar1;
		std::cout << "size: " << ar2.size() 
			<< "\n";

		std::cout << "array:";
		for (size_t i = 0; i < ar2.size(); i++)
			std::cout << " " << ar2[i];
		std::cout << "\n\n";

		try
		{
			std::cout << ar2[100];
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		try
		{
			std::cout << ar2[-15];
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	
	{
		Array<std::string> ar;
		std::cout << "\nsize: " << ar.size() 
			<< "\n\n";

		Array<std::string> ar1(3);
		std::cout << "size: " << ar1.size() 
			<< "\n";

		for (size_t i = 0; i < ar1.size(); i++)
			ar1[i] = "str";

		std::cout << "array:";
		for (size_t i = 0; i < ar1.size(); i++)
			std::cout << " " << ar1[i];
		std::cout << "\n\n";

		Array<std::string> ar2 = ar1;
		std::cout << "size: " << ar2.size() 
			<< "\n";

		std::cout << "array:";
		for (size_t i = 0; i < ar2.size(); i++)
			std::cout << " " << ar2[i];
		std::cout << "\n\n";

		try
		{
			std::cout << ar2[100];
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		try
		{
			std::cout << ar2[-15];
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	{
		Array<int> numbers(MAX_VAL);
		int* mirror = new int[MAX_VAL];
		srand(time(NULL));
		for (int i = 0; i < MAX_VAL; i++)
		{
			const int value = rand();
			numbers[i] = value;
			mirror[i] = value;
		}
		//SCOPE
		{
			Array<int> tmp = numbers;
			Array<int> test(tmp);
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			if (mirror[i] != numbers[i])
			{
				std::cerr << "didn't save the same value!!" << std::endl;
				return 1;
			}
		}
		try
		{
			numbers[-2] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			numbers[MAX_VAL] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			numbers[i] = rand();
		}
		delete [] mirror;//
		return 0;
	}
}