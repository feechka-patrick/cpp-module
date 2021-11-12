#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <math.h>
# include <vector>

class Span
{
	private:
		std::vector<int> array;
		unsigned int findex;
	public:
		Span();
		Span(unsigned int length);
		Span(const Span &obj);
		
		void addNumber(int number);
		void addRange(int lvalue, int rvalue);
		int shortestSpan() const;
		int longestSpan() const;

		Span& operator= (const Span& obj);

		class OverflowArrayException : public std::exception
		{
			const char* what() const throw();
		};
		class UndersizedArrayException : public std::exception
		{
			const char* what() const throw();
		};

		~Span();
};

#endif
