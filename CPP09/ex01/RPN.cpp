#include "RPN.hpp"

RPN::RPN(char *line)
{
	CheckMoiCaaa(line);
	for (int i = strlen(line) - 1; i >= 0; i--)
	{
		if (isdigit(line[i]) || line[i] == '+' || line[i] == '-' || line[i] == '/' || line[i] == '*' || line[i] == ' ')
		{
			if (line[i] == ' ')
				continue;
			else if (line[i] == '+' || line[i] == '-' || line[i] == '/' || line[i] == '*')
			{
				this->StackOperand.push(line[i]);
			}
			else
			{
				char c = line[i];
				int num = static_cast<int>(c) - static_cast<int>('0');
				this->StackDigit.push(num);
			}
		}
		else
			throw NotValidInput();
	}
}

RPN::RPN(const RPN& copy)
{
	*this = copy;
}

RPN	&RPN::operator=(const RPN& ope)
{
	this->StackDigit = ope.StackDigit;
	this->StackOperand = ope.StackOperand;
	return (*this);
}

RPN::~RPN()
{

}

void	RPN::CalculReversePolishNotation()
{
	double result = StackDigit.top();
	StackDigit.pop();
	double b = StackDigit.top();
	StackDigit.pop();
	int size = static_cast<int>(StackOperand.size());

	for (int i = 0; i < size; i++)
	{
		if (StackOperand.top() == '/')
			result = result / b;
		else if (StackOperand.top() == '-')
			result = result - b;
		else if (StackOperand.top() == '+')
			result = result + b;
		else if (StackOperand.top() == '*')
			result = result * b;
		StackOperand.pop();
		if (i != size - 1)
		{
			b = StackDigit.top();
			StackDigit.pop();
		}
	}
	
	std::cout << result << std::endl;
}

void	RPN::CheckMoiCaaa(char *line)
{
	int i = 0;
	if (!isdigit(line[i]))
		throw NotValidInput();
	else
	{
		for (int j = i + 2; line[j]; j++)
		{
			if (!isdigit(line[j]))
				throw NotValidInput();
			j++;
			if (line[j] == ' ')
				j++;
			if (line[j] != '+' && line[j] != '-' && line[j] != '/' && line[j] != '*')
				throw NotValidInput();
			else
			{
				if (line[j + 1])
				{
					if (line[j + 1] && (line[j + 1] == '+' || line[j + 1] == '-' || line[j + 1] == '/' || line[j] == '*'))
						throw NotValidInput();
					j++;
				}
			}
		}
	}
}