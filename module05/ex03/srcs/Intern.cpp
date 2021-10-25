# include "Intern.hpp"

Intern::Intern() {}
Intern::Intern(const Intern &obj) {}

Form *Intern::makeForm(std::string formName, std::string target)
{
	std::string formTypes[] = {"shrubbery creation", "robotomy request", "presidential pardon" };
	Form *forms[] = { new ShrubberyCreationForm(target), new RobotomyRequestForm(target), 
		new PresidentialPardonForm(target) , 0};
	
	Form *resultForm = 0;
	int i = 0;

	for ( ; i < 3 && formTypes[i] != formName; i++) delete forms[i];

	resultForm = forms[i++];
	for ( ; i < 3; i++) delete forms[i];

	if (resultForm == 0)
		throw Intern::InvalidFormNameException();
	return (resultForm);
}

Intern& Intern::operator= (const Intern& obj) { return (*this); }
Intern::~Intern() {}