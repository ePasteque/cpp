/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 11:32:14 by lbattest          #+#    #+#             */
/*   Updated: 2022/08/24 16:01:05 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
	std::cout << type << " has been spawn in the room" << std::endl;
	this->type = type;
}

Weapon::~Weapon(void) {
	std::cout << this->type << " has been destroyed" << std::endl;
}

std::string	Weapon::getType(void) {
	return this->type;
}

void	Weapon::setType(std::string type) {
	this->type = type;
}