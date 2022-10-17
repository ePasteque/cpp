/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:11:21 by lbattest          #+#    #+#             */
/*   Updated: 2022/10/17 15:48:45 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int	main()
{
	try
	{
		// Bureaucrat	Bob("Bob", 151);

		Bureaucrat	Georges("Georges", 2);

		Bureaucrat	Timothee(Georges);

		Form		randomPaper("random", 5, 10);

		std::cout << "---------------------" << std::endl;

		Timothee.gradeUp();
		std::cout << Timothee << std::endl;
		Timothee.gradeUp();	
		std::cout << Timothee << std::endl;

		Bureaucrat Frederic("Frederic", 150);
		Frederic.gradeDown();


		std::cout << "---------------------" << std::endl;

		Frederic.signForm(&randomPaper);
		randomPaper.beSigned(&Georges);

		randomPaper.beSigned(&Georges);
		
		std::cout << "---------------------" << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}