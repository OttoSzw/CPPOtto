#include "Span.hpp"

Span::Span(unsigned int num) : N(num)
{
	
}

Span::Span(const Span& copy)
{
	*this = copy;
}

Span	&Span::operator=(const Span& ope)
{
	if (this != &ope)
	{
		this->stock = ope.stock;
		this->N = ope.N;
	}
	return (*this);
}

Span::~Span()
{

}

void	Span::addNumber(int n)
{
	if (static_cast<int>(stock.size()) < this->N)
	{
		stock.push_back(n);
	}
	else
	{
		throw OutOfSize();
	}
}

void	Span::addMany(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	for (std::vector<int>::iterator it = begin; it != end; it++)
		addNumber(*it);
}

int	Span::getStock(int i) const
{
	if (stock.empty() || stock.size() == 1)
	{
		throw std::invalid_argument("The stock is empty or the size is one");
	}
	return (stock[i]);
}

int Span::getSize() const
{
	return (this->N);
}

int	Span::shortestSpan()
{
	if (stock.empty() || stock.size() == 1)
	{
		throw std::invalid_argument("The stock is empty or the size is one");
	}
	int result = 2147483647;
	int	resultequa;
	int size = static_cast<int>(stock.size());

	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (stock[i] > stock[j])
				resultequa = stock[i] - stock[j];
			else
				resultequa = stock[j] - stock[i];
			if (resultequa < result)
				result = resultequa;
		}
		
	}
	return (result);
}

int	Span::longestSpan()
{
	if (stock.empty() || stock.size() == 1)
	{
		throw std::invalid_argument("The stock is empty or the size is one");
	}
	int max = stock[0];
	int min = stock[0];
	
	for (size_t i = 0; i < stock.size(); i++)
	{
		if (stock[i] > max)
		{
			max = stock[i];
		}
		else if (stock[i] < min)
		{
			min = stock[i];
		}
	}
	return (max - min);
}