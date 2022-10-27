/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:45:51 by lbattest          #+#    #+#             */
/*   Updated: 2022/10/27 12:02:49 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

struct Data {
	int			a;
	std::string	str;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);
