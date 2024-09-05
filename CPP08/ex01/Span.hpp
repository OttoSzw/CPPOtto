#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class OutOfSize : public std::runtime_error
{
	public:
		OutOfSize() : runtime_error("\033[1;31m Impossible to add more number, not enough space left.. \033[0m") {}
};

class Span
{
	private:

		std::vector<int> stock;
		int	 N;

	public:

		Span(unsigned int num);
		Span(const Span& copy);
		Span &operator=(const Span& ope);
		~Span();

		void addNumber(int n);
		int	getStock(int i) const;
		int	getSize() const;

		int	shortestSpan();
		int	longestSpan();
		void addMany(std::vector<int>::iterator begin, std::vector<int>::iterator end);
};

#endif