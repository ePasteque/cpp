/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 13:54:06 by lbattest          #+#    #+#             */
/*   Updated: 2022/08/24 16:02:14 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	this->name = name;
	this->weapon = NULL;
	std::cout << name << " enter the room" << std::endl;
}

HumanB::~HumanB(void) {
	std::cout << this->name << " left the room " << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon) {
	this->weapon = &weapon;
	std::cout << this->name << " grabed " << this->weapon->getType() << std::endl;
}

void	HumanB::attack(void) {
	if (this->weapon == NULL)
		std::cout << this->name << " attacks with their fist" << std::endl;
	else
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}