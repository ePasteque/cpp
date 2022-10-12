/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 13:53:13 by lbattest          #+#    #+#             */
/*   Updated: 2022/10/12 14:10:17 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Brain {
	public:
		Brain();
		Brain(Brain &copy);
		Brain &operator=(const Brain &copy);
		~Brain();

		void setIdeas();
	private:
		std::string _ideas[100];
};