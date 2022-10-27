/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Literal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:55:21 by lbattest          #+#    #+#             */
/*   Updated: 2022/10/24 17:55:16 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Literal {
	public:
		Literal(std::string value);
		Literal(Literal const &copy);
		Literal &operator=(Literal const &copy);
		~Literal();

	private:
		std::string _value;
};