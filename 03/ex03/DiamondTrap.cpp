/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:29:42 by lbattest          #+#    #+#             */
/*   Updated: 2022/10/11 10:48:21 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap() {
	std::cout << "DiamondTrap " << name << " has been build" << std::endl;
	this->name = name;
	this->hp = 100;
	this->atk = 30;
	this->energy = 50;
}

DiamondTrap::DiamondTrap(DiamondTrap &copy) : ClapTrap(copy), ScavTrap(copy), FragTrap(copy) {
	std::cout << "Copy DiamondTrap constructor called" << std::endl;
	this->name = copy.getName();
	this->hp = copy.getHp();
	this->atk = copy.getAtk();
	this->energy = copy.getEnergy();	
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &copy) {
	std::cout << "Assignation DiamondTrap constructor called" << std::endl;
	this->name = copy.getName();
	this->hp = copy.getHp();
	this->atk = copy.getAtk();
	this->energy = copy.getEnergy();
	return *this;	
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap " << this->name << " has been destroyed" << std::endl;
}

void    DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void) {
	std::cout << "My DiamondTrap name is " << DiamondTrap::name << " and this is my ClapTrap name " << ClapTrap::getName() << std::endl;
}
