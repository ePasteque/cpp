/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:18:12 by lbattest          #+#    #+#             */
/*   Updated: 2022/10/06 16:24:19 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP
#define CLAPTRAP
#include <iostream>

class ClapTrap {
	public:
		ClapTrap(std::string name);
		ClapTrap(ClapTrap &copy);
		ClapTrap	&operator=(const ClapTrap &copy);
		~ClapTrap(void);

		std::string	getName(void) const;
		int			getHp(void) const;
		int			getAtk(void) const;
		int			getEnergy(void) const;

		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
	protected:
		std::string name;
		unsigned int			hp;
		unsigned int			energy;
		unsigned int			atk;
};

#endif