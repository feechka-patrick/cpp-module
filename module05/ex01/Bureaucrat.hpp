#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include "iostream"

class Bureaucrat
{
	private:
		const std::string name;
		int grade;
	public:
		Bureaucrat(std::string _name);
		Bureaucrat(std::string _name, int _grade);
		Bureaucrat(const Bureaucrat &obj);
		Bureaucrat& operator= (const Bureaucrat& obj);

		void setGrade(int &_grade);
		void incrementGrade();
		void decrementGrade();

		class GradeTooHighException : public std::exception
		{
			const char *what() const throw ()
			{
				return ("Grade: too high exception!");
			}
		};
		class GradeTooLowException : public std::exception
		{
			const char *what() const throw ()
			{
				return ("Grade: too low exception!");
			}
		};
		std::string getName() const;
		int getGrade() const;
		~Bureaucrat();
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);

#endif


