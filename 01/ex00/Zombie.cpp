/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 14:11:04 by lbattest          #+#    #+#             */
/*   Updated: 2022/08/24 10:33:25 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	this->name = name;
	std::cout << name << " has come to life !" << std::endl;
}

Zombie::~Zombie(void) {
	std::cout << this->name << " died" << std::endl;
}

void	Zombie::annonce(void) {
	std::cout << this->name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}