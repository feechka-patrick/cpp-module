#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <algorithm>
# include <iostream>

template<typename T>
typename T::iterator easyfind(T& dst, int value)
{
	typename T::iterator result = find(dst.begin(), dst.end(), value);
	if (result == dst.end())
		std::cerr << "error: value not find\n";
	return result;
}

# endif