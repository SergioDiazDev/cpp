#ifndef RPN_HPP
#define RPN_HPP

# include <stack>
# include <iostream>

class RPN
{
	private:
		RPN(RPN const &copy);
		RPN	&operator=(RPN const &copy);
		std::stack<int> _stack;

	public:
		int calculate(std::string);
		void printResult();
		RPN();
		~RPN();
};

#endif
