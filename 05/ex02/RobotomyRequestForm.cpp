/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 13:28:33 by lbattest          #+#    #+#             */
/*   Updated: 2022/10/19 17:40:16 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45) {
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : Form(copy.getName(), copy.getSignGrade(), copy.getExecGrade()) {
	std::cout << "RobotomyRequestForm copy constuctor called" << std::endl;
	*this = copy;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy) {
	std::cout << "RobotomyRequestForm assignation constructor called" << std::endl;
	this->_target = copy._target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

void	RobotomyRequestForm::execute(Bureaucrat const &exec) const {
	if (this->canExec(exec) == false)
    	return ;
	std::cout << exec.getName() << " executed " << this->getName() << std::endl;
	std::cout << "*DRILL NOISE*" << std::endl;
	srand(time(NULL));
	if (rand() % 2 == 0)
		std::cout << this->_target << " has been robotomized" << std::endl;
	else
		std::cout << this->_target << " couldn't be robotomized..." << std::endl;
}
