/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:15:09 by lbattest          #+#    #+#             */
/*   Updated: 2022/10/12 11:19:38 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {
	std::cout << "WrongAnimal default constructor called" << std::endl;
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(WrongAnimal &copy) {
	std::cout << "WrongAnimal copy construtor called" << std::endl;
	this->type = copy.type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy) {
	std::cout << "WrongAnimal assignation constructor called" << std::endl;
	this->type = copy.type;
	return *this;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "*WrongAnimal noise*" << std::endl;
}

std::string	WrongAnimal::getType(void) const{
	return this->type;
}