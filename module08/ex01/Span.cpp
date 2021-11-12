# include "Span.hpp"

Span::Span() : findex(0)
{
	array.resize(0);
}

Span::Span(unsigned int length) :  findex(0)
{
	array.resize(length);
}

void Span::addNumber(int number)
{
	if (findex == array.size())
		throw Span::OverflowArrayException();
	array[findex++] = number;
}

void Span::addRange(int lvalue, int rvalue)
{
	while (lvalue <= rvalue)
	{
		if (findex == array.size())
			throw std::exception();
		array[findex++] = lvalue++;
	}
}

int Span::shortestSpan() const
{
	if (findex < 2)
		throw Span::UndersizedArrayException();
	int sspan = abs(array[1] - array[0]);
	for (size_t i = 0; i < findex; i++)
	{
		for (size_t j = i + 1; j < findex; j++)
		{
			if (abs(array[i] - array[j]) < sspan)
				sspan = abs(array[i] - array[j]);
		}
	}
	return sspan;
}

int Span::longestSpan() const
{
	if (findex < 2)
		throw Span::UndersizedArrayException();
	int max = array[0];
	int min = array[1];
	for (size_t i = 0; i < findex; i++)
	{
		if (array[i] > max)
			max = array[i];
		if (array[i] < min)
			min = array[i];
	}
	return max - min;
}

Span::Span(const Span &obj) : findex(obj.findex)
{
	array.resize(obj.array.size());
	for (unsigned int i = 0; i < obj.findex; i++)
		array[i] = obj.array[i];
}

const char* Span::OverflowArrayException::what() const throw()
{
	return ("OverflowArrayException");
}

const char* Span::UndersizedArrayException::what() const throw()
{
	return ("UndersizedArrayException");
}

Span& Span::operator= (const Span& obj)
{
	array.resize(obj.array.size());
	findex = obj.findex;
	for (unsigned int i = 0; i < obj.findex; i++)
		array[i] = obj.array[i];
	return (*this);
}

Span::~Span() { } 
