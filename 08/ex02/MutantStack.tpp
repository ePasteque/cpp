/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:59:30 by lbattest          #+#    #+#             */
/*   Updated: 2022/11/08 15:38:29 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack() : std::stack<T>() {

}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &copy) : std::stack<T>(copy) {

}

template<typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &copy) {
	*this = copy;
	return *this;
}