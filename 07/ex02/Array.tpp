/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:22:30 by lbattest          #+#    #+#             */
/*   Updated: 2022/11/02 16:24:33 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array() : _array(), _size(0) {}

template<typename T>
Array<T>::Array(unsigned int n) : _size(n) {
    this->_array = new T[n];
}

template<typename T>
Array<T>::Array(Array<T> &copy) {
    *this = copy;
}

template<typename T>
Array<T>   &Array<T>::operator=(Array<T> &copy) {
	this->_size = copy.size();
	this->_array = new T[copy.size()];
	for (unsigned int i = 0; i < this->_size; i++) {
		this->_array[i] = copy._array[i];
	}
	return *this;
}

template<typename T>
Array<T>::~Array() {
    delete[]  this->_array;
}

template<typename T>
unsigned int    Array<T>::size() {
    return (this->_size);
}

template<typename T>
T &Array<T>::operator[](int index) {
	if ((unsigned int)index >= this->_size)
		throw std::exception();
	return this->_array[index];
}