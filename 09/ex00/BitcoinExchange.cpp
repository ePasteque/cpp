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

bool BitcoinExchange::parseLine(std::string &line) {
	if (line == "date | value" || line.empty())
		return false;
	_date.clear();
	std::string value;
	size_t i;
	i = line.find('|');
	if (i == 11 && line[i - 1] == ' ' && line[i + 1] && line[i + 1] == ' ' && line.size() > 13) {
		_date.append(line, 0, i - 1);
		value.append(line, i + 2, std::string::npos);
	}
	else {
		std::cout << "Error: bad input => " << line << std::endl;
		return false;
	}
	i = 0;
	for (; _date[i]; i++) {
		if ((i != 4 && i != 7 && !isdigit(_date[i])) || ((i == 4 || i == 7) && _date[i] != '-')) {
			std::cout << "Error: bad input => " << line << std::endl;
			return false;
		}
	}

	size_t comma = value.find_first_of('.');
	if (comma == 0 || !value[comma + 1]) {
		std::cout << "Error: bad input => " << line << std::endl;
		return false;
	}
	i = 0;
	for (; value[i]; i++) {
		if (value[i] == '-') {
			std::cout << "Error: not a positive number.\n";
			return false;
		}
		else if ((!isdigit(value[i]) && value[i] != '.')) {
			std::cout << "Error: bad input => " << line << std::endl;
			return false;
		}
		else if (value[i] == '.' && i != comma) {
			std::cout << "Error: bad input => " << line << std::endl;
			return false;}
	}
	_nbr = std::strtod(value.c_str(), NULL);
	if (_nbr < 0 || _nbr > 1000){
		std::cout << "Error: number must be between 0 and 1000.\n";
		return false;
	}
	return true;
}

void BitcoinExchange::doMagic() {
	std::map<std::string, float>::iterator it = findDate(_date);
	std::cout << _date << " => " << _nbr << " = " << _nbr * it->second << std::endl;
}

std::map<std::string, float>::iterator BitcoinExchange::findDate(std::string &date) {
	std::map<std::string, float>::iterator it = _data.find(date);
	if (it == _data.end()) {
		it = _data.lower_bound(date);
		if (it != _data.begin())
			it--;
	}
	return it;
}