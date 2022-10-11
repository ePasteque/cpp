/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:29:32 by lbattest          #+#    #+#             */
/*   Updated: 2022/10/07 15:21:04 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP
#define DIAMONDTRAP
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap , public FragTrap {
	public:
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap &copy);
		DiamondTrap	&operator=(const DiamondTrap &copy);
		virtual	~DiamondTrap(void);

		void	whoAmI(void);
		void	attack(const std::string &target);
	protected:
		std::string	name;
};

#endif