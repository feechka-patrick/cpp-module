#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern *intern = new Intern();

	try
	{
		std::cout << *(intern->makeForm("shrubbery creation", "target")) << std::endl;
		std::cout << *(intern->makeForm("presidential pardon", "target")) << std::endl;
		std::cout << *(intern->makeForm("hot form", "target")) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}