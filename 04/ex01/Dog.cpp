/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:27:02 by lbattest          #+#    #+#             */
/*   Updated: 2022/10/12 15:01:13 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(Dog &copy) {
	std::cout << "Dog copy constructor called" << std::endl;
	this->type = copy.type;	
	this->_brain = new Brain(*copy._brain);
}

Dog	&Dog::operator=(const Dog &copy) {
	std::cout << "Dog assignation constructor called" << std::endl;
	this->type = copy.type;
	this->_brain = new Brain(*copy._brain);
	return *this;
}

Dog::~Dog(void) {
	std::cout << "Dog destructor called" << std::endl;
	delete this->_brain;
}

void	Dog::makeSound(void) const {
	std::cout << "*Wouf Wouf*" << std::endl;
}