/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:11:32 by lbattest          #+#    #+#             */
/*   Updated: 2022/10/19 16:15:47 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stdexcept>
#include <string>
#include "Form.hpp"

class Form ;

class Bureaucrat {
	public:
		Bureaucrat();
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(Bureaucrat &copy);
		Bureaucrat &operator=(const Bureaucrat &copy);
		~Bureaucrat();

		std::string getName() const;
		int			getGrade() const;

		void		gradeUp();
		void		gradeDown();
		void		signForm(Form *form);
		void		executeForm(Form const &form);
		class GradeTooHighException : public std::exception {
			public:
				virtual const char*	what() const throw() {
					return "Bureaucrat has already the highest grade";
				}
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char*	what() const throw() {
					return "Bureaucrat is at his lowest already";
				}
		};
	private:
		std::string const	_name;
		int					_grade;
};

std::ostream	&operator<<(std::ostream& os, Bureaucrat const &curr);