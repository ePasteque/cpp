/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:16:57 by lbattest          #+#    #+#             */
/*   Updated: 2022/10/12 11:47:12 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL
#define ANIMAL
#include <iostream>

class Animal {
	public:
		Animal(void);
		Animal(Animal &copy);
		Animal	&operator=(const Animal &copy);
		virtual ~Animal(void);

		virtual void	makeSound(void) const;
		std::string		getType(void) const;
	protected:
		std::string type;
};
#endif