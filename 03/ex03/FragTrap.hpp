/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 09:55:26 by lbattest          #+#    #+#             */
/*   Updated: 2022/10/11 10:46:08 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FRAGTRAP
#define FRAGTRAP
#include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap {
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap &copy);
		FragTrap	&operator=(const FragTrap &copy);
		~FragTrap(void);

		void	highFiveGuys(void);
};
#endif