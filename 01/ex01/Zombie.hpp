/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 16:21:55 by lbattest          #+#    #+#             */
/*   Updated: 2022/08/24 10:56:30 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE
#define ZOMBIE
#include <iostream>
#include <iomanip>

class Zombie {
	public:
		Zombie(void);
		~Zombie(void);
		void	annonce(void);
		void	setName(std::string name);

	private:
		std::string	name;
};

Zombie* zombieHorde(int n, std::string name);

#endif