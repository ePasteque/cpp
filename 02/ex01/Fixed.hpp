/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:27:38 by lbattest          #+#    #+#             */
/*   Updated: 2022/10/05 16:38:54 by lbattest         ###   ########.fr       */
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