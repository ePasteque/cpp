/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 11:26:05 by lbattest          #+#    #+#             */
/*   Updated: 2022/08/24 12:14:14 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON
#define WEAPON
#include <iostream>

class Weapon {
	public:
		Weapon(std::string type);
		~Weapon(void);
		std::string	getType(void);
		void		setType(std::string type);
	private:
		std::string	type;
};

#endif