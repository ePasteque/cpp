/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:11:53 by lbattest          #+#    #+#             */
/*   Updated: 2022/11/08 15:36:41 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T> {
	public:
		typedef typename	std::stack<T>::container_type::const_iterator	iterator;
		MutantStack();
		MutantStack(const MutantStack<T> &copy);
		MutantStack &operator=(const MutantStack<T> &copy);
		~MutantStack() {};
		
		iterator	begin() const {return std::stack<T>::c.begin();};
		iterator	end() const {return std::stack<T>::c.end();};
};