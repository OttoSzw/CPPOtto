#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <cstring>
#include <stack>

class NotValidInput : public std::runtime_error
{
	public:

		NotValidInput() : std::runtime_error("\033[5;31m            ERROR: Argument not valid.\033[0m") {}
};

class RPN
{

	public:

		std::stack<int> StackDigit;
		std::stack<char> StackOperand;

		RPN(char *line);
		RPN(const RPN& copy);
		RPN &operator=(const RPN& ope);
		~RPN();

		void		CheckMoiCaaa(char *line);
		void	CalculReversePolishNotation();
};

#endif