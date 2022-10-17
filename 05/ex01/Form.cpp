/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 13:31:19 by lbattest          #+#    #+#             */
/*   Updated: 2022/10/17 15:28:02 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const name, int signGrade, int execGrade) : _name(name), _signGrade(signGrade), _execGrade(execGrade) {
	std::cout << "Form default constructor called " << std::endl;
	this->_isSigned = false;
	try {
		if (signGrade > 150 || execGrade > 105)
			throw Form::GradeTooLowException();
		else if (signGrade < 1 || execGrade < 1)
			throw Form::GradeTooHighException();
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
		return ;
	}
}

Form::Form(Form &copy) : _name(copy._name), _signGrade(copy._signGrade), _execGrade(copy._execGrade){
	std::cout << "Form copy constructor called" << std::endl;
	*this = copy;
}

Form &Form::operator=(const Form &copy) {
	std::cout << "Form assignation constructor called" << std::endl;
	this->_isSigned = copy._isSigned;
	return *this;
}

Form::~Form() {
	std::cout << "Form destructor called" << std::endl;
}

std::string	Form::getName() const {
	return this->_name;
}

bool	Form::getIsSigned() const {
	return this->_isSigned;
}

int	Form::getExecGrade() const {
	return this->_execGrade;
}

int	Form::getSignGrade() const {
	return this->_signGrade;
}

std::ostream	&operator<<(std::ostream& os, Form const& curr) {
	os << "Form " << curr.getName() << std::endl;
	return os;
}

void Form::beSigned(Bureaucrat *p) {
	try {
		if (this->_signGrade < p->getGrade())
			throw Form::GradeTooLowException();
		else if (this->_isSigned == true)
			throw Form::AlreadySigned();
		this->_isSigned = true;
		std::cout << this->getName() << " is signed by " << p->getName() << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}