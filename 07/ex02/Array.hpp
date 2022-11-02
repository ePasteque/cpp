/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:50:10 by lbattest          #+#    #+#             */
/*   Updated: 2022/11/02 16:26:30 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
class Array {
	public:
		Array();
		Array(unsigned int n);
		Array(Array<T>& copy);
		Array &operator=(Array<T>& copy);
		~Array();
		
		unsigned int size();
		T &operator[](int index);
	private:
		T*				_array;
		unsigned int	_size;
};