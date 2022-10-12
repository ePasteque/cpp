/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:29:41 by lbattest          #+#    #+#             */
/*   Updated: 2022/10/12 10:58:53 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(Cat &copy) {
	std::cout << "Cat copy constructor called" << std::endl;
	this->type = copy.type;
}

Cat	&Cat::operator=(const Cat &copy) {
	std::cout << "Cat assignation constructor called" << std::endl;
	this->type = copy.type;
	return *this;
}

Cat::~Cat(void) {
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound(void) const {
	std::cout << "*Miaou Miaou*" << std::endl;
}