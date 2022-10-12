/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:29:41 by lbattest          #+#    #+#             */
/*   Updated: 2022/10/12 15:00:49 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(Cat &copy) {
	std::cout << "Cat copy constructor called" << std::endl;
	this->type = copy.type;
	this->_brain = new Brain(*copy._brain);
}

Cat	&Cat::operator=(const Cat &copy) {
	std::cout << "Cat assignation constructor called" << std::endl;
	this->type = copy.type;
	this->_brain = new Brain(*copy._brain);
	return *this;
}

Cat::~Cat(void) {
	std::cout << "Cat destructor called" << std::endl;
	delete this->_brain;
}

void	Cat::makeSound(void) const {
	std::cout << "*Miaou Miaou*" << std::endl;
}