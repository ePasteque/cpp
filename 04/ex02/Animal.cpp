/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:46:11 by lbattest          #+#    #+#             */
/*   Updated: 2022/10/12 16:06:26 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) {
	std::cout << "Animal default constructor called" << std::endl;
	this->type = "Animal";
}

Animal::Animal(Animal &copy) {
	std::cout << "Animal copy construtor called" << std::endl;
	this->type = copy.type;
}

Animal &Animal::operator=(const Animal &copy) {
	std::cout << "Animal assignation constructor called" << std::endl;
	this->type = copy.type;
	return *this;
}

Animal::~Animal(void) {
	std::cout << "Animal destructor called" << std::endl;
}

std::string	Animal::getType(void) const{
	return this->type;
}
