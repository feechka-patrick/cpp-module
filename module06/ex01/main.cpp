#include <iostream>
#include "Converter.hpp"

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		try
		{
			Converter convert(argv[1]);

			std::cout << "char: " << convert.toChar() << std::endl;
			std::cout << "int: " << convert.toInt() << std::endl;
			std::cout << "float: " << convert.toFloat() << std::endl;
			std::cout << "double: " << convert.toDouble() << std::endl;

		}
		catch(const std::exception& e)
		{
			std::cerr << "LiteralInvalidException\n";
		}
	}
}
