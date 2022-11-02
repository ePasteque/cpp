/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:35:44 by lbattest          #+#    #+#             */
/*   Updated: 2022/11/02 11:02:14 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template<typename T>
T const& min(T const& a, T const& b) {
	return a <= b ? a : b;
}

template<typename T>
T const& max(T const& a, T const& b) {
	return a >= b ? a : b;
}

template<typename T>
void swap(T& a, T& b) {
	T	temp;
	
	temp = a;
	a = b;
	b = temp;
}