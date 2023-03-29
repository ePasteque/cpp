//
// Created by lbattest on 3/15/23.
//

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const RPN &rhs) {
	*this = rhs;
}

RPN &RPN::operator=(const RPN &rhs) {
	this->_stack = rhs._stack;
	return *this;
}

RPN::~RPN() {}

void RPN::doStuff(std::string str) {
	if (str.empty())
		return;
	if (str.size() < 3) {
		std::cout << "Error: not enough element.\n";
		return;
	}
	double nbr1;
	double nbr2;
	for (size_t i = 0; str[i]; i++) {
		if (str[i] == ' ')
			continue;
		if (!isdigit(str[i]) && str[i] != '+' && str[i] != '-' && str[i] != '/' && str[i] != '*') {
			std::cout << "Error: wrong character in the input.\n";
			return;
		}
		if (isdigit(str[i])) {
			_stack.push(str[i] - '0');
		}
		else {
			if (_stack.size() < 2) {
				std::cout << "Error: input not balance between number and operator.\n";
				return;
			}
			nbr1 = _stack.top();
			_stack.pop();
			nbr2 = _stack.top();
			_stack.pop();
			switch (str[i]) {
				case '+':
					_stack.push(nbr2 + nbr1);
					break;
				case '-':
					_stack.push(nbr2 - nbr1);
					break;
				case '/':
					_stack.push(nbr2 / nbr1);
					break;
				case '*':
					_stack.push(nbr2 * nbr1);
					break;
				default:
					std::cout << "Error\n";
			}
		}
	}
	if (_stack.size() != 1) {
		std::cout << "Error: input not balance between number and operator.\n";
		return;
	}
	std::cout << _stack.top() << std::endl;
	return;
}