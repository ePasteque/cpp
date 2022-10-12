/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:16:45 by lbattest          #+#    #+#             */
/*   Updated: 2022/10/12 10:59:01 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG
#define DOG
#include "Animal.hpp"

class	Dog : public Animal {
	public:
		Dog(void);
		Dog(Dog &copy);
		Dog &operator=(const Dog &copy);
		~Dog(void);

		void	makeSound(void) const;
};
#endif