//
// Created by lbattest on 3/15/23.
//

#pragma once

# include <fstream>
# include <iostream>
# include <string>
# include <cstdlib>
# include <map>
# include <iomanip>

class BitcoinExchange {
	private:
		std::map<std::string, float>	_data;
		std::string						_date;
		double							_nbr;
	public:
		BitcoinExchange();
		BitcoinExchange(BitcoinExchange const &rhs);
		BitcoinExchange &operator=(BitcoinExchange const &rhs);
		~BitcoinExchange();

		int parseData();
		bool parseLine(std::string &line);
		void doMagic();
		std::map<std::string, float>::iterator findDate(std::string &date);
};

