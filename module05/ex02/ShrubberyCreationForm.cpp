# include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string _name) 
	: Form(_name, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj)
	: Form(obj.getName(), 145, 137) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator= (const ShrubberyCreationForm& obj)
{ return (*this); }

void ShrubberyCreationForm::execute (Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getgradeExec())
	{
		std::cout << executor.getName() << " cannot execute " << this->getName() <<
			" because his grade is low\n";
		throw Form::GradeTooLowException();
	}
	else if (this->getStatus()) // action
	{
		std::ifstream ascii_tree("ascii_tree.txt");
		std::ofstream newfile(this->getName() + "_shrubbery");
		std::string tree;

		while (getline(ascii_tree, tree))
			newfile << tree << "\n";
		newfile.close();
		ascii_tree.close();

		std::cout << executor.getName() << " execute " << this->getName() << "\n";
	}
	else
		std::cout << executor.getName() << " cannot execute " << this->getName() <<
			" because form not be sign\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

