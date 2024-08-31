#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>
T	easyfind(std::vector<T>& type, int nb)
{
	typename std::vector<T>::iterator it = std::find(type.begin(), type.end(), nb);
	if (it != type.end())
		return (*it);
	return (0);
};

#endif