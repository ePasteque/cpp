//
// Created by lbattest on 3/15/23.
//

#include "RPN.hpp"

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Error: not the right number of arguments.\n";
		return 0;
	}
	RPN rpn;
	rpn.doStuff(argv[1]);
}