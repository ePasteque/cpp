//
// Created by lbattest on 3/15/23.
//

#pragma once

# include <string>
# include <iostream>
# include <stack>
# include <cstdlib>

class RPN {
	private:
		std::stack<double> _stack;
	public:
		RPN();
		RPN(RPN const &rhs);
		RPN &operator=(RPN const &rhs);
		~RPN();

		void doStuff(std::string str);
};