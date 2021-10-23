#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	{
		std::cout << "------- ShrubberyCreationForm -------\n" ;
		ShrubberyCreationForm form("shrubbery_target"); // 135, 147

		Bureaucrat bur1("BUR1", 150);
		Bureaucrat bur2("BUR2", 110);

		try
		{
			form.beSigned(bur1);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		std::cout << std::endl;
		form.execute(bur2);
		form.beSigned(bur2);
		std::cout << std::endl << form << std::endl;

		try
		{	
			form.execute(bur1);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		std::cout << std::endl;
		form.execute(bur2);
	}

	{
		std::cout << "\n------- RobotomyRequestForm -------\n" ;
		RobotomyRequestForm form("robotomy_target"); // 72, 45

		Bureaucrat bur1("BUR1", 80);
		Bureaucrat bur2("BUR2", 30);

		try
		{
			form.beSigned(bur1);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		std::cout << std::endl;
		form.execute(bur2);
		form.beSigned(bur2);
		std::cout << std::endl << form << std::endl;
		
		try
		{	
			form.execute(bur1);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		std::cout << std::endl;
		form.execute(bur2);
		form.execute(bur2);
	}

	{
		std::cout << "\n------- PresidentialPardonForm -------\n" ;
		PresidentialPardonForm form("presidential_target"); // 25, 5

		Bureaucrat bur1("BUR1", 80);
		Bureaucrat bur2("BUR2", 2);

		try
		{
			form.beSigned(bur1);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		std::cout << std::endl;
		form.execute(bur2);
		form.beSigned(bur2);
		std::cout << std::endl << form << std::endl;
		
		try
		{	
			form.execute(bur1);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		std::cout << std::endl;
		form.execute(bur2);
	}
}