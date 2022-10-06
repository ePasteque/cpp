/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:18:26 by lbattest          #+#    #+#             */
/*   Updated: 2022/10/06 14:18:16 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) {
	std::cout << "ClapTrap " << name << " has been build" << std::endl;
	this->name = name;
	this->atk = 0;
	this->hp = 10;
	this->energy = 10;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap " << this->name << " has been destroyed" << std::endl;
}

void	ClapTrap::attack(const std::string &target) {
	if (this->hp > 0 && this->energy > 0) {
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->atk << " points of damage!" << std::endl;
		this->energy--;
		this->atk = 0;
	}
	else
		std::cout << "ClapTrap " << this->name << " is enable to attack" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->hp > 0) {
		if (this->hp < amount)
			this->hp = 0;
		else
			this->hp = this->hp - amount;
		std::cout << "ClapTrap " << this->name << " take " << amount << " of damage" << std::endl;
		if (this->hp == 0)
			std::cout << "ClapTrap " << this->name << " died" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->name << " cannot take more damage, he's already dead" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->hp > 0 && this->energy > 0) {
		std::cout << "ClapTrap " << this->name << " repaire it self and gaine " << amount << " of Hit points" << std::endl;
		this->energy--;
		this->hp = this->hp + amount;
	}
	else
		std::cout << "ClapTrap " << this->name << " cannot repaire it self" << std::endl;
}