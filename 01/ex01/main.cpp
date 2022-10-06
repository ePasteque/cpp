/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 10:28:17 by lbattest          #+#    #+#             */
/*   Updated: 2022/08/24 10:59:56 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	int			i;
	std::string	str;

	std::cout << "How many Zombie do you want to create : ";
	std::getline(std::cin, str);
	if (str.empty())
		return 1;
	i = std::atoi(str.c_str());	
	std::cout << "What are the name : ";
	std::getline(std::cin, str);
	if (str.empty()) {
		std::cout << "Default name is bob" << std::endl;
		str = "bob";
	}
	Zombie* horde = zombieHorde(i, str);
	for (int j = 0; j < i; j++)
		horde[j].annonce();
	delete [] horde;
	return 0;
}