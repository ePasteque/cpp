/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:11:21 by lbattest          #+#    #+#             */
/*   Updated: 2022/10/17 13:29:17 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat	Bob("Bob", 151);
	Bureaucrat	Georges("Georges", 2);

	Bureaucrat	Timothee(Georges);

	std::cout << "---------------------" << std::endl;

	Timothee.gradeUp();
	std::cout << Timothee << std::endl;
	Timothee.gradeUp();
	std::cout << Timothee << std::endl;

	Bureaucrat Frederic("Frederic", 150);
	std::cout << Frederic << std::endl;
	Frederic.gradeDown();

	std::cout << "---------------------" << std::endl;
}