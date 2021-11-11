#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <math.h>

class Span
{
	private:
		int *array;
		unsigned int n;
		unsigned int findex;
	public:
		Span();
		Span(unsigned int length);
		Span(const Span &obj);
		
		void addNumber(int number);
		int shortestSpan() const;
		int longestSpan() const;
		void info()
		{
			std::cout << findex << std::endl;
			std::cout << n << std::endl;
		}

		Span& operator= (const Span& obj);

		class OverflowArrayException : public std::exception {};
		class UndersizedArrayException : public std::exception {};

		~Span();
};

#endif
