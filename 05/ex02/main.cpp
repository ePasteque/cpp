/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:11:21 by lbattest          #+#    #+#             */
/*   Updated: 2022/11/15 11:32:35 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	try {
		// Bureaucrat	Bob("Bob", 151);
		Bureaucrat	Georges("Georges", 2);

		Bureaucrat	Timothee(Georges);

		Form	*paper = new ShrubberyCreationForm("garden");
		Form	*paper2 = new RobotomyRequestForm("Roger");
		Form	*paper3 = new PresidentialPardonForm("Bob");

		std::cout << "---------------------" << std::endl;

		Timothee.gradeUp();
		std::cout << Timothee << std::endl;
		// Timothee.gradeUp();	
		std::cout << Timothee << std::endl;

		Bureaucrat Frederic("Frederic", 150);
		// Frederic.gradeDown();

		std::cout << "--------------------- Paper 1 ---------------------" << std::endl;

		// paper->execute(Frederic);
		Timothee.signForm(paper);
		// paper->execute(Frederic);
		paper->execute(Timothee);
		std::cout << "--------------------- Paper 2 ---------------------" << std::endl;

		// paper2->execute(Frederic);
		Timothee.signForm(paper2);
		paper2->execute(Timothee);
		std::cout << "--------------------- Paper 3 ---------------------" << std::endl;

		// paper3->execute(Frederic);
		Timothee.signForm(paper3);
		Timothee.executeForm(*paper3);

		std::cout << "---------------------" << std::endl;

		delete	paper;
		delete	paper2;
		delete	paper3;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}