/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:50:11 by lbattest          #+#    #+#             */
/*   Updated: 2022/11/03 16:07:58 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {
	std::list<int>		l(42, 100);
	std::vector<int> 	v(21, 50);
	
	l.push_back(21);
	l.push_back(42);
	l.push_back(3);
	l.push_back(420);
	l.push_back(7355608);
	l.push_back(69);
	l.push_back(666);
	l.push_back(1);
	v.push_back(42);

	try {
		int i = easyfind(l, 420);
		std::cout << i << std::endl;
		i = easyfind(v, 42);
		std::cout << i << std::endl;
		i = easyfind(l, 777);
	}
	catch (std::exception& e) {
		std::cout << "Number not found" << std::endl;
	}
	return 1;
}