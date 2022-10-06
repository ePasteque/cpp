/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:41:57 by lbattest          #+#    #+#             */
/*   Updated: 2022/10/05 15:53:06 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) {
	this->nbr = 0;
	std::cout << "Default contructor called" << std::endl;
}

Fixed::Fixed(const Fixed &Fixed) {
	this->nbr = Fixed.getRawBits();
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int nbr) {
	std::cout << "Int constructor called" << std::endl;
	this->nbr = (nbr << this->bit_nbr);
}

Fixed::Fixed(const float nbr) {
	std::cout << "Float construtor called" << std::endl;
	this->nbr = roundf(nbr * (1 << this->bit_nbr));
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &copy) {
	std::cout << "Copy assignement operateur called" << std::endl;
	this->nbr = copy.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &os, Fixed const &curr) {
	os << curr.toFloat();
	return os;
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
