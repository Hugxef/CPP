#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	BitcoinExchange bitcoin;

	if (argc != 2)
	{
		std::cout << "Usage: " << argv[0] << " <filename>" << std::endl;
		return 1;
	}
	bitcoin.get_user_input(argv[1]);
	bitcoin.print_value();
	return 0;
}
