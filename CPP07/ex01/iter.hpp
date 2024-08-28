#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void	iter(T* array, int length_array, void function(T array))
{
	for (int i = 0; i < length_array; i++)
	{
		function(array[i]);
	}
	return ;
}

#endif