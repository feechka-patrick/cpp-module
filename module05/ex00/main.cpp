#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat *bur = new Bureaucrat("BUR", 0);
		std::cout << *bur << std::endl;
		delete bur;
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bureaucrat *bur = new Bureaucrat("BUR", 10);
		std::cout << *bur << std::endl;
		delete bur;
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bureaucrat *bur = new Bureaucrat("BUR", 250);
		std::cout << *bur << std::endl;
		delete bur;
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}
}