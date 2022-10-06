/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:17:43 by lbattest          #+#    #+#             */
/*   Updated: 2022/10/06 16:07:05 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {
    ClapTrap Bob("Bob");
    ClapTrap Roger(Bob);
    ClapTrap Denis("Denis");

    Bob.takeDamage(5);
    Denis = Bob;
    
    std::cout << "Denis : " << Denis.getHp() << " - Bob : " << Bob.getHp() << std::endl;
    Bob.takeDamage(4);
    Bob.beRepaired(50);
    Bob.attack("Enemy");

    
    Bob.takeDamage(51);
    Bob.beRepaired(50);
    Bob.attack("Enemy");

    std::cout << "Bob hp : " << Bob.getHp() << std::endl; 
	return 0;
}