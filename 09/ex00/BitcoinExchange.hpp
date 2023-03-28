//
// Created by lbattest on 3/15/23.
//

#pragma once

//#include <iostream>
//#include <algorithm>
//#include <ostream>
//#include <fstream>
//#include <string>
//#include <map>
//#include <iomanip>
//#include <cstdlib>
# include <fstream>
# include <iostream>
# include <string>
# include <cstdlib>
# include <map>
# include <iomanip>

class BitcoinExchange {
	private:
		std::map<std::string, float> _data;
	public:
		BitcoinExchange();
		BitcoinExchange(BitcoinExchange const &rhs);
		BitcoinExchange &operator=(BitcoinExchange const &rhs);
		~BitcoinExchange();

		int parseData();
		void parseLine(std::string &line);
		void afficheData();
		std::map<std::string, float>::iterator findDate(std::string &date);
};

