/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:06:52 by lbattest          #+#    #+#             */
/*   Updated: 2022/11/02 11:47:42 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template<typename T>
void	print(T& element) {
	std::cout << element << std::endl;
}
template<typename T>
void	iter(T* array, unsigned int size, void (*f)(T& element)) {
	for (unsigned int i = 0; size > i; i++) {
		f(array[i]);
	}
}