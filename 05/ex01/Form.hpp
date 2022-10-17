/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 13:31:13 by lbattest          #+#    #+#             */
/*   Updated: 2022/10/17 15:52:05 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Bureaucrat.hpp"

class Bureaucrat ;
class Form {
	public:
		Form(std::string const name, int const signGrade, int const execGrade);
		Form(Form &copy);
		Form	&operator=(const Form &copy);
		~Form();
		
		std::string 	getName() const;
		bool			getIsSigned() const;
		int				getSignGrade() const;
		int				getExecGrade() const;

		void			beSigned(Bureaucrat *b);
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char*	what() const throw()
				{
					return ("The grade is too high !");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char*	what() const throw()
				{
					return ("The grade is too low !");
				}
		};

		class AlreadySigned : public std::exception
		{
			public:
				virtual const char*	what() const throw()
				{
					return ("The form is already signed !");
				}
		};

	private:
		std::string const	_name;
		bool				_isSigned;
		int const			_signGrade;
		int const			_execGrade;
};

std::ostream	&operator<<(std::ostream& os, Form const &curr);