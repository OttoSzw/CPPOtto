#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
// #include <deque>
#include <iostream>

template < typename T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
    public:

		MutantStack() {}

		MutantStack(const MutantStack& copy)
		{
			*this = copy;
		}

		MutantStack	&operator=(const MutantStack& ope)
		{
			std::stack<T, Container>::operator=(ope);
			return (*this);
		}

		~MutantStack() {}

		typedef typename Container::iterator iterator;

		iterator	begin()
		{
			return (this->c.begin());
		}

		iterator	end()
		{
			return (this->c.end());
		}
		
};

#endif