#include "Span.hpp"

int main()
{
	Span span(10000);
	for (int i = -5000; i < 5000; i++)
		span.addNumber(i);
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