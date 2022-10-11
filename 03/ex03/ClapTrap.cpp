/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:18:26 by lbattest          #+#    #+#             */
/*   Updated: 2022/10/11 10:45:53 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {
	std::cout << "ClapTrad default constructor called" << std::endl;
	this->atk = 0;
	this->hp = 10;
	this->energy = 10;
}

ClapTrap::ClapTrap(std::string name) {
	std::cout << "ClapTrap " << name << " has been build" << std::endl;
	this->name = name;
	this->atk = 0;
	this->hp = 10;
	this->energy = 10;
}

ClapTrap::ClapTrap(ClapTrap &copy) {
	std::cout << "Copy constructor called" << std::endl;
	this->name =  copy.getName();
	this->atk = copy.getAtk();
	this->hp = copy.getHp();
	this->energy = copy.getEnergy();
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &copy) {
	std::cout << "Assignation constructor called" << std::endl;
	this->name = copy.getName();
	this->atk = copy.getAtk();
	this->hp = copy.getHp();
	this->energy = copy.getEnergy();	
	return *this;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap " << this->name << " has been destroyed" << std::endl;
}

std::string	ClapTrap::getName(void) const {
	return this->name;
}

int	ClapTrap::getHp(void) const {
	return this->hp;
}

int	ClapTrap::getAtk(void) const {
	return this->atk;
}

int	ClapTrap::getEnergy(void) const {
	return this->energy;
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
		if (this->hp + amount < 2147483647)
			this->hp = this->hp + amount;
		else
			this->hp = 2147483647;
	}
	else
		std::cout << "ClapTrap " << this->name << " cannot repaire it self" << std::endl;
}