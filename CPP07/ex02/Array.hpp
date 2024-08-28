#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <iostream>
#include <cstdlib>

class OutofBounds : public std::exception
{
	public:
		
		const char *what() const throw()
		{
			return ("Invalid Index !");
		}
};

template <typename T>
class Array
{
	private:

		T *array;
		unsigned int size;

	public:

		Array() : array(new T[0]), size(0)
		{
		}

		Array(unsigned int n) : array(new T[n]), size(n)
		{
		}

		Array(const Array &copy) : array(new T[0])
		{
			*this = copy;
		}

		Array &operator=(const Array &ope)
		{
			if (this != &ope)
			{
				delete[] this->array;
				size = ope.size;
				array = new T[size];
				for (size_t i = 0; i < size; i++)
				{
					array[i] = ope.array[i];
				}
			}
			return (*this);
		}

		~Array()
		{
			if (this->array != NULL)
				delete[] array;
		}

		T &operator[](unsigned int index)
		{
			if (index >= this->size || index < 0)
				throw OutofBounds();
			return (array[index]);
		}

		unsigned int getSize() const
		{
			return (size);
		}
};

#endif