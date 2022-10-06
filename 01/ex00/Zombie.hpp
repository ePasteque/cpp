/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 16:21:55 by lbattest          #+#    #+#             */
/*   Updated: 2022/08/24 10:42:50 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE
#define ZOMBIE
#include <iostream>
#include <iomanip>


class Zombie {
	public:
		Zombie(std::string name);
		~Zombie(void);
		void	annonce(void);

	private:
		std::string	name;
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif