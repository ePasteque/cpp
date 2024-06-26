/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:41:29 by lbattest          #+#    #+#             */
/*   Updated: 2022/11/08 13:19:09 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <climits>
#include <algorithm>
#include <iostream>
#include <random>

class Span {
	public:
		Span(unsigned int nbr);
		Span(const Span& copy);
		Span &operator=(const Span& copy);
		~Span();
	
		void addNumber(int nbr);
		int shortestSpan();
		int longestSpan();
		void addRange(int nbr, int min, int max);
	private:
		std::vector<int>	_array;
		unsigned int		_left_space;
		unsigned int		_inc;
};