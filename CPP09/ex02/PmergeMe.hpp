#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>

class PmergeMe
{

    public:

        std::vector<int> vec;
        std::deque<int>  deq;

        PmergeMe();
        PmergeMe(const PmergeMe& copy);
        PmergeMe &operator=(const PmergeMe& ope);
        ~PmergeMe();

        void InitialiseContainer(char **tab);
};

#endif