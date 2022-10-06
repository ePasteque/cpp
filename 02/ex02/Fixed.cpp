/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:41:57 by lbattest          #+#    #+#             */
/*   Updated: 2022/10/06 10:07:37 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) {
	this->nbr = 0;
}

Fixed::Fixed(const Fixed &Fixed) {
	this->nbr = Fixed.getRawBits();
}

Fixed::Fixed(const int nbr) {
	this->nbr = (nbr << this->bit_nbr);
}

Fixed::Fixed(const float nbr) {
	this->nbr = roundf(nbr * (1 << this->bit_nbr));
}

Fixed::~Fixed(void) {
}

Fixed	&Fixed::operator=(const Fixed &copy) {
	this->nbr = copy.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &os, Fixed const &curr) {
	os << curr.toFloat();
	return os;
}

bool	Fixed::operator>(Fixed const &sec) const {
	return toFloat() > sec.toFloat();
}

bool	Fixed::operator<(Fixed const &sec) const {
	return toFloat() < sec.toFloat();
}

bool	Fixed::operator>=(Fixed const &sec) const {
	return toFloat() >= sec.toFloat();
}

bool	Fixed::operator<=(Fixed const &sec) const {
	return toFloat() <= sec.toFloat();
}

bool	Fixed::operator==(Fixed const &sec) const {
	return toFloat() == sec.toFloat();
}

bool	Fixed::operator!=(Fixed const &sec) const {
	return toFloat() != sec.toFloat();
}

Fixed	Fixed::operator+(Fixed const &sec) const {
	return Fixed(toFloat() + sec.toFloat());
}

Fixed	Fixed::operator-(Fixed const &sec) const {
	return Fixed(toFloat() - sec.toFloat());
}

Fixed	Fixed::operator*(Fixed const &sec) const {
	return Fixed(toFloat() * sec.toFloat());
}

Fixed	Fixed::operator/(Fixed const &sec) const {
	return Fixed(toFloat() / sec.toFloat());
}

Fixed	Fixed::operator++(void) {
	this->nbr++;
	return *this;
}

Fixed	Fixed::operator++(int) {
	const Fixed	tmp(*this);
	this->operator++();
	return tmp;
}

Fixed	Fixed::operator--(void) {
	this->nbr--;
	return *this;
}

Fixed	Fixed::operator--(int) {
	const Fixed	tmp(*this);
	this->operator--();
	return tmp;
}

Fixed	&Fixed::min(Fixed &first, Fixed &second) {
	if (first <= second)
		return first;
	else
		return second;
}

const Fixed &Fixed::min(Fixed const &first, Fixed const &second) {
	if (first <= second)
		return first;
	else
		return second;
}

Fixed	&Fixed::max(Fixed &first, Fixed &second) {
	if (first >= second)
		return first;
	else
		return second;	
}

const Fixed &Fixed::max(Fixed const &first, Fixed const &second) {
	if (first >= second)
		return first;
	else
		return second;	
}

int		Fixed::getRawBits(void) const {
	return this->nbr;	
}

void	Fixed::setRawBits(int const raw) {
	this->nbr = raw;
}

float	Fixed::toFloat(void) const {
	return((float)this->nbr / (float)(1 << this->bit_nbr));
}

int		Fixed::toInt(void) const {
	return (this->nbr >> this->bit_nbr);
}
