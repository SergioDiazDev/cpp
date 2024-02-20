#include "RPN.hpp"

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define MAGENTA "\033[35m"
#define BLUE "\033[34m"

RPN::RPN()
{
	std::cout << GREEN << "Create RPN Default" << RESET << std::endl;
}

RPN::~RPN()
{
	std::cout << RED << "Destroy RPN Default" << RESET << std::endl;
}

RPN::RPN(RPN const &copy)
{
	_stack = copy._stack;
}

RPN	&RPN::operator=(const RPN &copy)
{
	if (this != &copy) {
		_stack = copy._stack;
	}
	return *this;
}

int RPN::calculate(std::string argv)
{
	for (int i = 0; argv[i]; i++)
	{
		if (isspace(argv[i]))
			continue ;
		else if (isdigit(argv[i]))
			_stack.push(argv[i] - '0');
		else if (argv[i] == '+' || argv[i] == '-' || argv[i] == '/' || argv[i] == '*')
		{
			if (_stack.size() < 2)
				return (std::cout << RED << "Syntax Error!" << RESET << std::endl , -1);
			int x = _stack.top();
			_stack.pop();
			int y = _stack.top();
			_stack.pop();
			switch(argv[i])
			{
				case '+':
					_stack.push(y + x);
					break;
				case '-':
					_stack.push(y - x);
					break;
				case '/':
					_stack.push(y / x);
					break;
				case '*':
					_stack.push(y * x);
					break;
			}
		}
		else
			return (std::cout << RED << "Syntax Error!" << RESET << std::endl , -1);
	}
	if (_stack.size() == 1)
		return (printResult(), 0);
	else
		return (std::cout << RED << "Syntax Error!" << RESET << std::endl , -1);
	return (printResult(), 0);
}

void RPN::printResult()
{
	if (_stack.size() == 1)
		std::cout << "Result: " << _stack.top() << std::endl;
	else
		std::cout << RED << "Syntax Error!" << RESET << std::endl;
}