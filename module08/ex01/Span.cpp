# include "Span.hpp"

Span::Span() : n(0), findex(0)
{
	array = new int[n];
}

Span::Span(unsigned int length) :  n(length), findex(0)
{
	array = new int[n];
}

void Span::addNumber(int number)
{
	if (findex == n)
		throw Span::OverflowArrayException();
	array[findex++] = number;
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

Span::Span(const Span &obj) : n(obj.n), findex(obj.findex)
{
	array = new int[n];
	for (unsigned int i = 0; i < obj.n; i++)
		array[i] = obj.array[i];
}

Span& Span::operator= (const Span& obj)
{
	delete[] array;
	n = obj.n;
	findex = obj.findex;
	array = new int[n];
	for (unsigned int i = 0; i < obj.n; i++)
		array[i] = obj.array[i];
	return (*this);
}

Span::~Span()
{
	delete[] array;
} 
