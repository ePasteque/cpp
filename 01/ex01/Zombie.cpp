/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 14:11:04 by lbattest          #+#    #+#             */
/*   Updated: 2022/08/24 10:47:16 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {
	std::cout << "a Zombie has come to life !" << std::endl;
}

Zombie::~Zombie(void) {
	std::cout << this->name << " died" << std::endl;
}

void	Zombie::setName(std::string name) {
	this->name = name;
}

void	Zombie::annonce(void) {
	std::cout << this->name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}