/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:17:43 by lbattest          #+#    #+#             */
/*   Updated: 2022/10/06 16:32:02 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void) {
    ScavTrap Bob("Bob");
    ScavTrap Roger(Bob);
    ScavTrap Denis("Denis");

    Bob.takeDamage(5);
    Denis = Bob;
    
    std::cout << "Denis : " << Denis.getHp() << " - Bob : " << Bob.getHp() << std::endl;
    Bob.takeDamage(51);
    Bob.beRepaired(50);
    Bob.attack("Enemy");
	Bob.guardGate();
    
    Bob.takeDamage(999);
    Bob.beRepaired(50);
    Bob.attack("Enemy");
	Bob.guardGate();

    std::cout << "Bob hp : " << Bob.getHp() << std::endl; 
	return 0;
}