/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:45:45 by lbattest          #+#    #+#             */
/*   Updated: 2022/10/27 12:10:16 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data* ptr) {
	uintptr_t serialize = reinterpret_cast<uintptr_t>(ptr);
	return serialize;
}

Data* deserialize(uintptr_t raw) {
	Data* deserialize = reinterpret_cast<Data*>(raw);
	return deserialize;
}