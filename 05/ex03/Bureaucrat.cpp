/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:11:41 by lbattest          #+#    #+#             */
/*   Updated: 2022/11/15 09:33:30 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
// a corriger en prennant form bureaucrat et autre sur ex d'avant
Bureaucrat::Bureaucrat() : _name("Bob") {
	std::cout << "Bureaucrat default constructor called" << std::endl;
	this->_grade = 150;
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name) {
	std::cout << "Bureaucrat default constructor called" << std::endl;
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat &copy) : _name(copy._name) {
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = copy;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy) {
	std::cout << "Bureaucrat assignation constructor called" << std::endl;
	this->_grade = copy._grade;
	return *this;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat destructor called" << std::endl;
}

std::string Bureaucrat::getName() const {
	return this->_name;
}

int	Bureaucrat::getGrade() const {
	return  this->_grade;
}

void Bureaucrat::gradeUp() {
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void	Bureaucrat::gradeDown() {
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

void	Bureaucrat::signForm(Form *form) {
	if (form->getIsSigned() == true) {
		std::cout << this->_name << " couldn't sign " << form->getName() << " because it's aready signed" << std::endl;
	}
	else if (this->_grade > form->getSignGrade()) {
		std::cout << this->_name << " couldn't sign " << form->getName() << " because bureaucrat grade is too low" << std::endl;
	}
	else {
		std::cout << this->_name << " signed " << form->getName() << std::endl;
		form->signThis();
	}
}

std::ostream	&operator<<(std::ostream& os, Bureaucrat const& curr) {
	os << curr.getName() << ", bureaucrat grade " << curr.getGrade() << ".";
	return os;
}

void	Bureaucrat::executeForm(Form const &form) {
	form.execute(*this);
}