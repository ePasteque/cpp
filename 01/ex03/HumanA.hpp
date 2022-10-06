/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 11:54:52 by lbattest          #+#    #+#             */
/*   Updated: 2022/08/24 14:21:32 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAINA
#define HUMAINA
#include "Weapon.hpp"

class HumanA {
	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA(void);
		void	attack(void);
	private:
		std::string	name;
		Weapon&		weapon;
};

#endif