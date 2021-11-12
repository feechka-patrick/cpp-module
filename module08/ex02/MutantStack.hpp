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
		
		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin()
		{
			return this->c.begin();
		}
		
		iterator end()
		{
			return this->c.end();
		}

		~MutantStack() {}
};

#endif
