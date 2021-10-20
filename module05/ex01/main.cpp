#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat *bur = new Bureaucrat("BUR", -4);
		delete bur;
	}
	catch(const char *ErrorMessage)
	{
		std::cerr << ErrorMessage << '\n';
	}
}