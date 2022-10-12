/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 13:42:49 by lbattest          #+#    #+#             */
/*   Updated: 2022/10/12 15:05:25 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	Animal*	animals[6];

	for (int i = 0; i < 3; i++) {
		animals[i] = new Dog();
	}
	for (int i = 3; i < 6; i++) {
		animals[i] = new Cat();
	}
	animals[1]->makeSound();
	animals[4]->makeSound();
	std::cout << "---------------------------------------" << std::endl;
	for (int i = 0; i < 6; i++) {
		delete	animals[i];
	}
	std::cout << "Constructor---------------------------------------" << std::endl;
	Cat* test = new Cat;
	Cat* copy = new Cat(*test);
	std::cout << "Destructor---------------------------------------" << std::endl;
	delete	test;
	delete	copy;
}