#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <deque>
#include <iostream>

class NotValidInput : public std::runtime_error
{
	public:

		NotValidInput() : std::runtime_error("\033[5;31m            ERROR: Argument not valid.\033[0m") {}
};

class PmergeMe
{
	public:

		std::vector<int> vec;
		std::deque<int> deq;

		PmergeMe(char **tab);
		PmergeMe(const PmergeMe& copy);
		PmergeMe &operator=(const PmergeMe& ope);
		~PmergeMe();
};

#endif