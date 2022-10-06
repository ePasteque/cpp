/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 13:47:19 by lbattest          #+#    #+#             */
/*   Updated: 2022/08/24 14:18:31 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAINB
#define HUMAINB
#include "Weapon.hpp"

class HumanB {
	public:
		HumanB(std::string name);
		~HumanB(void);
		void	attack(void);
		void	setWeapon(Weapon& weapon);
	private:
		std::string	name;
		Weapon*		weapon;
};

#endif