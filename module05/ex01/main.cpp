#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat *bur1 = new Bureaucrat("BUR1", 5);
	std::cout << *bur1 << std::endl;

	Bureaucrat *bur2 = new Bureaucrat("BUR2", 2);
	std::cout << *bur2 << std::endl << std::endl;

	Form *form = new Form("HOT FORM", 3, 5);

	try
	{
		form->beSigned(*bur1);
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;
	std::cout << *form;
	
	std::cout << std::endl;

	try
	{
		form->beSigned(*bur2);
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;
	std::cout << *form;
}