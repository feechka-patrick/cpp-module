#include "Array.hpp"

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
}