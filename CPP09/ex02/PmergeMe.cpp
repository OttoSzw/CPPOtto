#include "PmergeMe.hpp"

PmergeMe::PmergeMe(char **tab)
{

}

PmergeMe::PmergeMe(const PmergeMe& copy)
{
	*this = copy;
}

PmergeMe	&PmergeMe::operator=(const PmergeMe& ope)
{
	if (this != &ope)
	{
		this->deq = ope.deq;
		this->vec = ope.vec;
	}
	return (*this);
}

PmergeMe::~PmergeMe()
{

}