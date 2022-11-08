/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:41:35 by lbattest          #+#    #+#             */
/*   Updated: 2022/11/08 14:08:08 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int nbr) : _left_space(nbr), _inc(0) {
	
}

Span::Span(const Span& copy) {
	*this = copy;
}

Span &Span::operator=(const Span& copy) {
	this->_array = copy._array;
	this->_left_space = copy._left_space;
	this->_inc = copy._inc;
	return *this;
}

Span::~Span() {
	
}

void	Span::addNumber(int nbr) {
	if (this->_left_space == 0)
		throw (std::exception());
	this->_array.push_back(nbr);
	this->_left_space--;
	this->_inc++;
}

int	Span::shortestSpan() {
	int span = INT_MAX;
	int	min = INT_MAX;
	int max = INT_MAX;

	for (int i = 0; this->_array[i]; i++) {
		for (int j = i + 1; this->_array[j]; j++) {
			if (this->_array[i] > this->_array[j]) {
				min = this->_array[j];
				max = this->_array[i];
			}
			else {
				min = this->_array[i];
				max = this->_array[j];
			}
			if (span > max - min) {
				span = max - min;
			}
		}
	}
	return span;
}

int	abs_compare(int a, int b) {
	return std::abs(a) < std::abs(b);
}

int	Span::longestSpan() {
	std::vector<int>::iterator	min = std::min_element(this->_array.begin(), this->_array.end());
	std::vector<int>::iterator	max = std::max_element(this->_array.begin(), this->_array.end(), abs_compare);
	return *max - *min;
}

void	Span::addRange(int nbr, int min, int max) {
	std::srand(std::time(NULL));
	int rand = std::rand() % ( max - min + 1) + min;
	for (int i = 0; i < nbr; i++) {
		if (_left_space <= 0) {
			std::cout << "Span is full can't add more number" << std::endl;
			break ;
		}
		this->_array.push_back(rand);
		rand = std::rand() % ( max - min + 1) + min;
		this->_left_space++;
	}
}