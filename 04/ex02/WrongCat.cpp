/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:21:54 by lbattest          #+#    #+#             */
/*   Updated: 2022/10/12 11:24:36 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) {
	std::cout << "WrongCat default constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat &copy) {
	std::cout << "WrongCat copy constructor called" << std::endl;
	this->type = copy.type;
}

WrongCat	&WrongCat::operator=(const WrongCat &copy) {
	std::cout << "WrongCat assignation constructor called" << std::endl;
	this->type = copy.type;
	return *this;
}

WrongCat::~WrongCat(void) {
	std::cout << "WrongCat destructor called" << std::endl;
}