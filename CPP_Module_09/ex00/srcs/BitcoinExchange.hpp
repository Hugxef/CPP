#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <map>

class BitcoinExchange
{
	public:
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(BitcoinExchange const & copy);
		BitcoinExchange &operator=(BitcoinExchange const & copy);
		void get_user_input(char *input);
		void print_value();

	private:
		std::fstream _data_file;
		std::fstream _user_file;
		std::multimap<std::string, std::string> _data_map;
		std::multimap<std::string, std::string> _user_map;
};

void print_data(std::multimap<std::string, std::string> data);
bool check_date(std::string date, int mode);

#endif
