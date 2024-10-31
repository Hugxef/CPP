#include "RPN.hpp"

int main(int argc, char **argv)
{
	RPN rpn;

	if (argc != 2)
	{
		std::cout << "Usage : ./rnp \"calc to do\"" << std::endl;
		return 1;
	}
	rpn.calc(argv[1]);

	/* rpn.push_numbers(1); */
	/* rpn.push_numbers(2); */
	/* rpn.push_numbers(3); */
	/* rpn.push_numbers(4); */
	/* rpn.push_numbers(5); */
	/* std::cout << rpn.get_count() << std::endl; */
	/*  */
	/* rpn.pop_numbers(); */
	/* rpn.pop_numbers(); */
	/* rpn.pop_numbers(); */
	/* rpn.pop_numbers(); */
	/* rpn.pop_numbers(); */
	/* std::cout << rpn.get_count() << std::endl; */
	return 0;
}
