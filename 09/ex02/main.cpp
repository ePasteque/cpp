//
// Created by lbattest on 4/11/23.
//

#include "PmergeMe.hpp"

int main(int argc, char **argv) {
	if (argc < 2) {
		std::cout << "Error: not enough argument\n";
		return 0;
	}
	PmergeMe pmg;
	if (!pmg.parsing(argv)) {
		std::cout << "Parsing pas bien !\n";
		return 0;
	}
	std::cout << "Before: ";
	for (int i = 1; argv[i]; i++) {
		std::cout << argv[i] << " ";
	}
	std::cout << std::endl;
	pmg.sort();
	return 1;
}