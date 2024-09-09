#include "Span.hpp"

int main()
{
	Span Instance(8);

	try
	{
		Instance.addNumber(84);
		Instance.addNumber(80);
		Instance.addNumber(6);
		Instance.addNumber(14);

		std::cout << "Shortest : " << Instance.shortestSpan()<< std::endl;
		std::cout << "Longest : " << Instance.longestSpan()<< std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::vector<int> test;
		for (int i = 0; i < 4; i++)
			test.push_back(i);
		Instance.addMany(test.begin(), test.end());
		for (int i = 0; i < static_cast<int>(Instance.getSize()); i++)
		{
			std::cout << i + 1 << "- " << Instance.getStock(i) << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}

// int main()
// {
// 	Span sp = Span(5);
// 	sp.addNumber(6);
// 	sp.addNumber(3);
// 	sp.addNumber(17);
// 	sp.addNumber(9);
// 	sp.addNumber(11);
// 	std::cout << sp.shortestSpan() << std::endl;
// 	std::cout << sp.longestSpan() << std::endl;
// 	return (0);
// }