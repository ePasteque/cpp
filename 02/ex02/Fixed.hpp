/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:27:38 by lbattest          #+#    #+#             */
/*   Updated: 2022/10/06 10:04:07 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED
#define FIXED
#include <iostream>
#include <cmath>

class Fixed {
	public:
		Fixed(void);
		Fixed(const Fixed &Fixed);
		Fixed(const int	nbr);
		Fixed(const float nbr);
		~Fixed(void);

		Fixed	&operator=(const Fixed &copy);
		bool	operator>(Fixed const &sec) const;
		bool	operator<(Fixed const &sec) const;
		bool	operator>=(Fixed const &sec) const;
		bool	operator<=(Fixed const &sec) const;
		bool	operator==(Fixed const &sec) const;
		bool	operator!=(Fixed const &sec) const;

		Fixed	operator+(Fixed const &sec) const;
		Fixed	operator-(Fixed const &sec) const;
		Fixed	operator*(Fixed const &sec) const;
		Fixed	operator/(Fixed const &sec) const;

		Fixed	operator++(void);
		Fixed	operator++(int);
		Fixed	operator--(void);
		Fixed	operator--(int);

		static Fixed		&min(Fixed &first, Fixed &second);
		static const Fixed	&min(Fixed const &first, Fixed const &second);
		static Fixed		&max(Fixed &first, Fixed &second);
		static const Fixed	&max(Fixed const &first, Fixed const &second);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

	private:
		int 				nbr;
		static const int	bit_nbr = 8;
};
std::ostream	&operator<<(std::ostream &os, Fixed const &curr);
#endif