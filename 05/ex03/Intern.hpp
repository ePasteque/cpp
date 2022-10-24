/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:43:36 by lbattest          #+#    #+#             */
/*   Updated: 2022/10/24 14:23:41 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Form.hpp"

class Intern {
	public:
		Intern();
		Intern(const Intern& copy);
		Intern &operator=(const Intern& copy);
		~Intern();

		Form*	makeForm(std::string name, std::string target);
	
	private:
		Form	*createRobotomy(std::string target);
		Form	*createPresidential(std::string target);
		Form	*createShrubbery(std::string target);
};