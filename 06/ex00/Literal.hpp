/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Literal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:55:21 by lbattest          #+#    #+#             */
/*   Updated: 2022/11/09 10:09:07 by lbattest         ###   ########.fr       */
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

		bool isChar();
		bool isInt();
		bool isFloat();
		bool isDouble();
		void print();
	private:
		std::string _value;
};