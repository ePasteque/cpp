/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bain.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 13:53:16 by lbattest          #+#    #+#             */
/*   Updated: 2022/10/12 14:32:01 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain default constructor called" << std::endl;	
	this->setIdeas();
}

Brain::Brain(Brain &copy) {
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++) {
		this->_ideas[i] = copy._ideas[i];
	}
}

Brain &Brain::operator=(const Brain &copy) {
	std::cout << "Brain assignation constructor called" << std::endl;
	for (int i = 0; i < 100; i++) {
		this->_ideas[i] = copy._ideas[i];
	}
	return *this;
}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;	
}

void	Brain::setIdeas() {
	for (int i = 0; i < 100; i++) {
		if (i % 2 == 0)
			this->_ideas[i] = "Eat";
		else
			this->_ideas[i] = "Sleep";
	}
}