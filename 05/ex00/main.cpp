/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:11:21 by lbattest          #+#    #+#             */
/*   Updated: 2022/11/11 18:44:47 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	try {
		Bureaucrat	Bob("Bob", 140);
		Bureaucrat	Georges("Georges", 5);

		Bureaucrat	Timothee(Georges);

		std::cout << "---------------------" << std::endl;

		Timothee.gradeUp();
		std::cout << Timothee << std::endl;
		Timothee.gradeUp();
		std::cout << Timothee << std::endl;

		// Bureaucrat Frederic("Frederic", 150);
		// std::cout << Frederic << std::endl;
		// Frederic.gradeDown();

		std::cout << "---------------------" << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
		return 1;
	}
	return 0;
}