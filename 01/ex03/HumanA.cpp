/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 11:53:25 by lbattest          #+#    #+#             */
/*   Updated: 2022/10/04 12:30:46 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : weapon(weapon) {
	this->name = name;
	this->weapon = weapon;
	std::cout << name << " enter the room with " << weapon.getType() << std::endl;
}

HumanA::~HumanA(void) {
	std::cout << this->name << " left the room " << std::endl;
}

void	HumanA::attack(void) {
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}