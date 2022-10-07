/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 09:56:11 by lbattest          #+#    #+#             */
/*   Updated: 2022/10/07 10:27:08 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "FragTrap " << name << " has been build" << std::endl;
	this->name = name;
	this->hp = 100;
	this->atk = 30;
	this->energy = 100;	
}

FragTrap::FragTrap(FragTrap &copy) : ClapTrap(copy) {
	std::cout << "Copy FragTrap constructor called" << std::endl;
	this->name = copy.getName();
	this->hp = copy.getHp();
	this->atk = copy.getAtk();
	this->energy = copy.getEnergy();
}

FragTrap	&FragTrap::operator=(const FragTrap &copy) {
	std::cout << "Assignation FragTrap constructor called" << std::endl;
	this->name = copy.getName();
	this->hp = copy.getHp();
	this->atk = copy.getAtk();
	this->energy = copy.getEnergy();
	return *this;
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap " << this->name << " has been destroyed" << std::endl;
}

void	FragTrap::highFiveGuys(void) {
	std::string	str;

	if (this->hp > 0 && this->energy > 0) {
		std::cout << "FragTrap " << this->name << " ask you to high five ! accept or deny ?" << std::endl;
		std::getline(std::cin, str);
		if (str == "accept" || str == "yes")
			std::cout << "FragTrap " << this->name << " is happy to high five you !" << std::endl;
		else
			std::cout << "FragTrap " << this->name << " is sad that you deny his request..." << std::endl; 
	}
	std::cout << "FragTrap " << this->name << " cannot do a high five" << std::endl;
}