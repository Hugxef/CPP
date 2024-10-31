#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <stack>
#include <string>

class RPN
{
	private:
		std::stack<int> _stack_numbers;
		int _elem_count;
	public:
		RPN();
		RPN(const RPN &copy);
		~RPN();
		RPN &operator=(const RPN &copy);
		void push_numbers(int n);
		int pop_numbers();
		int get_count();
		void calc(std::string args);
};

#endif
