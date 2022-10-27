/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:10:43 by lbattest          #+#    #+#             */
/*   Updated: 2022/10/27 12:18:47 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main() {
	Data ptr;
	
	ptr.a = 42;
	ptr.str = "Hello";
	uintptr_t raw = serialize(&ptr);
	Data* newPtr = deserialize(raw);
	std::cout << newPtr->a << std::endl << newPtr->str << std::endl;
	return 1;
}