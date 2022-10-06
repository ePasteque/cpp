/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 10:30:55 by lbattest          #+#    #+#             */
/*   Updated: 2022/08/24 10:46:07 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int n, std::string name) {
	int	i = -1;
	Zombie* horde = new Zombie[n];
	
	while (++i != n)
		horde[i].setName(name);
	return horde;
}