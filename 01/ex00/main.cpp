/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 16:19:58 by lbattest          #+#    #+#             */
/*   Updated: 2022/08/23 17:15:46 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	Zombie*	bob = newZombie("Bob");
	bob->annonce();
	delete bob;
	std::cout << std::endl; 
	randomChump("Jess");
}