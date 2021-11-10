#include "iter.hpp"

// class Awesome
// {
// 	private:
// 		int _n;
// 	public:
// 		Awesome(void): _n(42) {}
// 		int get() const {return _n;};

// };
// std::ostream &operator<<(std::ostream &o, const Awesome &a) {o << a.get(); return o;};

template<typename T>
void print(T const &x) {std::cout << x << std::endl; return;}

int main()
{
	int tab[] = {0, 1, 2, 3, 4 };
	std::string tab1[] = {"str0", "str1", "str2"};
	// Awesome tab2[5];

	::iter(tab, 5, print);
	iter(tab1, 3, print);
	// ::iter(tab2, 5, print);
}