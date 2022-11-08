/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:41:29 by lbattest          #+#    #+#             */
/*   Updated: 2022/11/08 11:57:44 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <climits>
#include <algorithm>

class Span {
	public:
		Span(unsigned int nbr);
		Span(Span& const copy);
		Span &operator=(Span& const copy);
		~Span();
	
		void addNumber(int nbr);
		int shortestSpan();
		int longestSpan();
	private:
		std::vector<int>	_array;
		unsigned int		_left_space;
		unsigned int		_inc;
};