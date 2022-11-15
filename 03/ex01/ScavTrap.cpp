/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:15:28 by lbattest          #+#    #+#             */
/*   Updated: 2022/11/15 11:45:25 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap " << name << " has been build" << std::endl;
	this->name = name;
	this->hp = 100;
	this->atk = 20;
	this->energy = 50;
}


ScavTrap::ScavTrap(ScavTrap &copy) : ClapTrap(copy) {
	std::cout << "Copy ScavTrap constructor called" << std::endl;
	this->name = copy.getName();
	this->hp = copy.getHp();
	this->atk = copy.getAtk();
	this->energy = copy.getEnergy();
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &copy) {
	std::cout << "Assignation ScavTrap constructor called" << std::endl;
	this->name = copy.getName();
	this->hp = copy.getHp();
	this->atk = copy.getAtk();
	this->energy = copy.getEnergy();
	return *this;	
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap " << this->name << " has been destroyed" << std::endl;	
}

void	ScavTrap::attack(const std::string &target) {
	if (this->hp > 0 && this->energy > 0) {
		std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->atk << " points of damage!" << std::endl;
		this->energy--;
		this->atk = 0;
	}
	else
		std::cout << "ScavTrap " << this->name << " is enable to attack" << std::endl;
}

// void	ScavTrap::takeDamage(unsigned int amount) {
// 	if (this->hp > 0) {
// 		if (this->hp < amount)
// 			this->hp = 0;
// 		else
// 			this->hp = this->hp - amount;
// 		std::cout << "ScavTrap " << this->name << " take " << amount << " of damage" << std::endl;
// 		if (this->hp == 0)
// 			std::cout << "ScavTrap " << this->name << " died" << std::endl;
// 	}
// 	else
// 		std::cout << "ScavTrap " << this->name << " cannot take more damage, he's already dead" << std::endl;
// }

// void	ScavTrap::beRepaired(unsigned int amount) {
// 	if (this->hp > 0 && this->energy > 0) {
// 		std::cout << "ScavTrap " << this->name << " repaire it self and gaine " << amount << " of Hit points" << std::endl;
// 		this->energy--;
// 		this->hp = this->hp + amount;
// 	}
// 	else
// 		std::cout << "ScavTrap " << this->name << " cannot repaire it self" << std::endl;
// }

void	ScavTrap::guardGate(void) {
	if (this->hp > 0)
		std::cout << "ScavTrap " << this->name << " is enter in Gate Keeenergyr" << std::endl;
}