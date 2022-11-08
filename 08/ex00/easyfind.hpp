/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:56:35 by lbattest          #+#    #+#             */
/*   Updated: 2022/11/03 16:07:00 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <list>
#include <vector>

template<typename T>
int	easyfind(T container, int nbr) {
	typename T::iterator	i = std::find(container.begin(), container.end(), nbr);
	if (i == container.end()) {
		throw std::exception();
	}
	return std::distance(container.begin(), i);
}