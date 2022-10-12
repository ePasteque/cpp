/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:17:43 by lbattest          #+#    #+#             */
/*   Updated: 2022/10/12 11:41:02 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void) {
    // DiamondTrap Bob("Bob");
    // DiamondTrap Roger(Bob);
    // DiamondTrap Denis("Denis");

    // Bob.takeDamage(5);
    // Denis = Bob;
    
    // std::cout << "Denis : " << Denis.getHp() << " - Bob : " << Bob.getHp() << std::endl;
    // Bob.takeDamage(51);
    // Bob.beRepaired(50);
    // Bob.attack("Enemy");
	// Bob.whoAmI();
    
    // Bob.takeDamage(999);
    // Bob.beRepaired(50);
    // Bob.attack("Enemy");
	// Bob.whoAmI();

    // std::cout << "Bob hp : " << Bob.getHp() << std::endl; 
	// return 0;
    ScavTrap Bob("Bob");
    std::cout << "----------------------------------" << std::endl;
    ScavTrap Roger(Bob);
    std::cout << "----------------------------------" << std::endl;
    FragTrap Denis("Denis");
    std::cout << "----------------------------------" << std::endl;
    DiamondTrap Fabrice("Fabrice");
    std::cout << "----------------------------------" << std::endl;

    Bob.takeDamage(5);
    Bob.guardGate();
    
    std::cout << "Denis : " << Denis.getHp() << " - Bob : " << Bob.getHp() << std::endl;
    Bob.takeDamage(10);
    Denis.highFiveGuys();
    Denis.attack("Dylan");
    Fabrice.attack("Denis");

    DiamondTrap Robert("Robert");
    std::cout << "----------------------------------" << std::endl;
    Robert.attack("Maxime");
    Robert.whoAmI();
    std::cout << Robert.getEnergy() << " ; " << Robert.getHp()
            << " ;" << std::endl;
    Robert.guardGate();
    Robert.highFiveGuys();

    std::cout << "----------------------------------" << std::endl;
    return 0;
}