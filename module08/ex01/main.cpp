#include "Span.hpp"

int main()
{
	Span span(10000);
	span.addNumber(-5000);

	try
	{
		span.longestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	span.addRange(-4999, 4999);
	try
	{
		span.addNumber(5000);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << span.shortestSpan() << std::endl;
	std::cout << span.longestSpan() << std::endl;
}