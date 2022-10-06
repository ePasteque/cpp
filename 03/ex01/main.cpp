/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:17:43 by lbattest          #+#    #+#             */
/*   Updated: 2022/10/06 12:16:39 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap	clap("Bob");

	clap.attack("enemy");
	clap.takeDamage(7);
	clap.beRepaired(10);
	clap.attack("enemy");
	clap.attack("enemy");
	clap.beRepaired(7);
	clap.beRepaired(4);
	clap.attack("enemy");
	clap.beRepaired(1);
	clap.beRepaired(1);
	clap.beRepaired(1);
	clap.beRepaired(1);
	clap.attack("enemy");
	clap.takeDamage(999);
	clap.takeDamage(4);

	return 0;
}