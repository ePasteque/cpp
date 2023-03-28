//
// Created by lbattest on 3/15/23.
//

#include "BitcoinExchange.hpp"

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Error: not the right number of parameter.\n";
		return 1;
	}
	BitcoinExchange bct;
	(void)argv;
	if (bct.parseData() == 1)
		return 1;
//	bct.afficheData();
	std::ifstream ifFile(argv[1]);
	if (ifFile.is_open()) {
		std::string line;
		while (getline(ifFile, line)) {
			bct.parseLine(line);
		}
	}
	else {
		std::cout << "Error: could not open file: " << argv[1] << ".\n";
		return 1;
	}
}
