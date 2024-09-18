#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <cstdlib>
#include <algorithm>

class PmergeMe
{

    public:

        std::vector<int> vec;
        std::deque<int>  deq;
        int              size;

        PmergeMe();
        PmergeMe(const PmergeMe& copy);
        PmergeMe &operator=(const PmergeMe& ope);
        ~PmergeMe();

        void InitialiseContainer(char **tab);
        void Algo();
};

#endif