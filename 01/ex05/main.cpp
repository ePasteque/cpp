/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 14:30:37 by lbattest          #+#    #+#             */
/*   Updated: 2022/09/20 18:12:41 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv) {
	Harl	harl;

	if (argc != 2) {
		std::cout << "Wrong number of argument" << std::endl;
		return 1;
	}
	harl.complain(argv[1]);
	return 0;
}