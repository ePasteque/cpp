/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:42:32 by lbattest          #+#    #+#             */
/*   Updated: 2022/10/24 14:34:59 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(const Intern& copy) {
	std::cout << "Intern copy constructor  called" << std::endl;
	(void)copy;
}

Intern &Intern::operator=(const Intern& copy) {
	std::cout << "Intern assignation constructor called" << std::endl;
	(void)copy;
	return *this;
}

Intern::~Intern() {
	std::cout << "Intern destructor called" << std::endl;
}

Form*	Intern::makeForm(std::string name, std::string target) {
	try {
		std::string	array[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
		Form*		(Intern::*form[])(std::string target) = {&Intern::createRobotomy, &Intern::createPresidential, &Intern::createShrubbery};
		for (int i = 0; i < 3; i++) {
			if (array[i] == name) {
				return (this->*form[i])(target);
			}
		}
		throw std::exception();
	}
	catch (const std::exception& e) {
		std::cerr << "This form does not exist" << std::endl;
		return NULL;
	}
}

Form	*Intern::createRobotomy(std::string target) {
	return (new RobotomyRequestForm(target));
}

Form	*Intern::createPresidential(std::string target) {
	return (new PresidentialPardonForm(target));
}

Form	*Intern::createShrubbery(std::string target) {
	return (new ShrubberyCreationForm(target));
}