#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <stack>
# include <iostream>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() {};
		MutantStack(const MutantStack &obj) {(void)obj;}
		
		MutantStack& operator= (const MutantStack& obj) {(void)obj; return *this;}
		
		typename std::stack<T>::container_type::iterator begin()
		{
			return this->c.begin();
		}
		
		typename std::stack<T>::container_type::iterator end()
		{
			return this->c.end();
		}

		~MutantStack() {}
};

#endif
