//
// Created by lbattest on 3/15/23.
//

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &rhs) {
	*this = rhs;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &rhs) {
	this->_data = rhs._data;
	return *this;
}

BitcoinExchange::~BitcoinExchange() {}

int BitcoinExchange::parseData() {
	std::string line;
	std::string tmp;
	std::string date;
	std::ifstream ifData("data.csv");
	if (ifData.is_open()) {
		std::getline(ifData, line);
		while (std::getline(ifData, line)) {
			date = line.substr(0, 10).c_str();
			_data.insert(std::pair<std::string, float>((date), atof(line.substr(11).c_str())));
		}
		ifData.close();
	}
	else {
		std::cout << "Error: could not open file: data.csv.\n";
		return 1;
	}
	return 0;
}

void BitcoinExchange::parseLine(std::string &line) {
	if (line == "date | value" || line.empty())
		return;
	std::string date;
	std::string value;
	size_t i;
	i = line.find('|');
	if (i == 11 && line[i - 1] == ' ' && line[i + 1] && line[i + 1] == ' ' && line.size() > 13) {
		date.append(line, 0, i - 1);
		value.append(line, i + 1, std::string::npos);
	}
	else {
		std::cout << "Error: bad input => " << line << std::endl;
		return;
	}

	i = 0;
	for (; date[i]; i++) {
		if ((i != 4 && i != 7 && !isdigit(date[i])) || ((i == 4 || i == 7) && date[i] != '-')) {
			std::cout << "Error: bad input => " << line << std::endl;
			return;
		}
	}

	i = value.find('.');
	if (i )
}

void BitcoinExchange::afficheData() {
	std::map<std::string, float>::iterator it = _data.begin();
	int i = 0;
	for (; it != _data.end(); it++) {
		i++;
		if (i > 500) {
//			std::cout << ("2011-02-03" > "2011-01-03") << std::endl;
			break;
		}

//		std::cout << "[" <<  it->first << "] - [" << it->second << "]\n";
	}
}

std::map<std::string, float>::iterator BitcoinExchange::findDate(std::string &date) {
	std::map<std::string, float>::iterator it = _data.find(date);
	if (it == _data.end()) {
		it = _data.lower_bound(date);
		if (it != _data.end() && it != _data.begin())
			it--;
	}
	return it;
}