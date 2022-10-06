/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:18:12 by lbattest          #+#    #+#             */
/*   Updated: 2022/10/06 14:18:18 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP
#define CLAPTRAP
#include <iostream>

class ClapTrap {
	public:
		ClapTrap(std::string name);
		~ClapTrap(void);

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