/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Literal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:02:17 by lbattest          #+#    #+#             */
/*   Updated: 2022/10/24 17:55:20 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Literal.hpp"

Literal::Literal(std::string value) {
	this->_value = value;
}

Literal::Literal(Literal const &copy) {
	*this = copy;
}

Literal &Literal::operator=(Literal const &copy) {
	this->_value = copy._value;
	return *this;
}

Literal::~Literal() {}
