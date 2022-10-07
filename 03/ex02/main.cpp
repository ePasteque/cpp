/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:17:43 by lbattest          #+#    #+#             */
/*   Updated: 2022/10/07 10:23:41 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void) {
    FragTrap Bob("Bob");
    FragTrap Roger(Bob);
    FragTrap Denis("Denis");

    Bob.takeDamage(5);
    Denis = Bob;
    
    std::cout << "Denis : " << Denis.getHp() << " - Bob : " << Bob.getHp() << std::endl;
    Bob.takeDamage(51);
    Bob.beRepaired(50);
    Bob.attack("Enemy");
	Bob.highFiveGuys();
    
    Bob.takeDamage(999);
    Bob.beRepaired(50);
    Bob.attack("Enemy");
	Bob.highFiveGuys();

    std::cout << "Bob hp : " << Bob.getHp() << std::endl; 
	return 0;
}