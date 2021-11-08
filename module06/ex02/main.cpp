#include <iostream>
#include <cstdlib>

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
	Base *bases[] = {
		new A(), new B(), new C()
	};

	int i = rand() % 3;
	for (int j = 0; j < 3; j++)
		if (j != i) delete bases[j];

	return (bases[i]);
}

void identify(Base* p)
{
	{
		Base *tmp = dynamic_cast<A *>(p);
		if (tmp)
			std::cout << "A" << std::endl;
	}

	{
		Base *tmp = dynamic_cast<B *>(p);
		if (tmp)
			std::cout << "B" << std::endl;
	}

	{
		Base *tmp = dynamic_cast<C *>(p);
		if (tmp)
			std::cout << "C" << std::endl;
	}
}

void identify(Base& p)
{
	try
	{
		Base &tmp = dynamic_cast<A&>(p);
		(void)tmp;
		std::cout << "A" << std::endl;
	}
	catch(const std::exception& e) {}

	try
	{
		Base &tmp = dynamic_cast<B&>(p);
		(void)tmp;
		std::cout << "B" << std::endl;
	}
	catch(const std::exception& e) {}

	try
	{
		Base &tmp = dynamic_cast<C&>(p);
		(void)tmp;
		std::cout << "C" << std::endl;
	}
	catch(const std::exception& e) {}
}

int main()
{
	{
		Base *b[] = { new A(), new B(), new C() };

		for (int i = 0; i < 3; i++)
		{
			identify(b[i]);
			delete b[i];
		}
		std::cout << std::endl;
		for (int i = 0; i < 5; i++)
		{
			Base *g = generate();
			identify(g);
			delete g;
		}
	}

	std::cout << std::endl;
	{
		A tmpA;
		B tmpB;
		C tmpC;
		Base &a = tmpA, &b = tmpB, &c = tmpC;

		identify(a);
		identify(b);
		identify(c);
	}
}