/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:57:34 by lbattest          #+#    #+#             */
/*   Updated: 2022/10/12 13:12:22 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* i = new Cat();
	const Animal* j = new Dog();

	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << "--------------------------" << std::endl;
	delete meta;
	delete i;
	delete j;
	std::cout << "--------------------------" << std::endl;
	const WrongAnimal* k = new WrongAnimal();
	const WrongAnimal* l = new WrongCat();
	
	std::cout << l->getType() << " " << std::endl;
	l->makeSound();
	k->makeSound();
	std::cout << "--------------------------" << std::endl;
	delete k;
	delete l;
	return 0;
}