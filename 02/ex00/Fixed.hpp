/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:27:38 by lbattest          #+#    #+#             */
/*   Updated: 2022/10/05 12:22:24 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED
#define FIXED
#include <iostream>

class Fixed {
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(const Fixed &Fixed);
		Fixed	&operator=(const Fixed &copy);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	private:
		int 				nbr;
		static const int	bit_nbr = 8;
};
#endif