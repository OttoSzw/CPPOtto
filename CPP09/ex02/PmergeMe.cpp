#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{

}

PmergeMe::PmergeMe(const PmergeMe& copy)
{
    *this = copy;
}

PmergeMe &PmergeMe::operator=(const PmergeMe& ope)
{
    if (this != &ope)
    {
        this->vec = ope.vec;
        this->deq = ope.deq;
    }
    return (*this);
}

PmergeMe::~PmergeMe()
{

}

void    PmergeMe::InitialiseContainer(char **tab)
{
    std::cout << "Before : ";
    for (int i = 0; tab[i]; i++)
    {
        vec.push_back(atoi(tab[i]));
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
}