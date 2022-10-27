/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:51:46 by lbattest          #+#    #+#             */
/*   Updated: 2022/10/27 16:49:16 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base* generate() {
	std::srand(std::time(NULL));
	switch (std::rand() % 3) {
		default:
			return new A;
		case 1:
			return new B;
		case 2:
			return new C;
	}
}

void identify(Base* p) {
	A* test = dynamic_cast<A*>(p);
	if (test != NULL) {
		std::cout << "True type is A" << std::endl;
		return ;
	}
	B* test2 = dynamic_cast<B*>(p);
	if (test2 != NULL) {
		std::cout << "True type is B" << std::endl;
		return ;
	}
	C* test3 = dynamic_cast<C*>(p);
	if (test3 != NULL) {
		std::cout << "True type is C" << std::endl;
		return ;
	}
}

void identify(Base& p) {
	try {
		A& test = dynamic_cast<A&>(p);
		std::cout << "True type is A" << std::endl;
		(void)test;
	}
	catch (const std::exception& e) {}
	try {
		B& test2 = dynamic_cast<B&>(p);
		std::cout << "True type is B" << std::endl;
		(void)test2;
	}
	catch (const std::exception& e) {}
	try {
		C& test3 = dynamic_cast<C&>(p);
		std::cout << "True type is C" << std::endl;
		(void)test3;
	}
	catch (const std::exception& e) {}
}