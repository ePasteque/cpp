/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:16:45 by lbattest          #+#    #+#             */
/*   Updated: 2022/11/09 18:28:15 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG
#define DOG
#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public Animal {
	public:
		Dog(void);
		Dog(Dog &copy);
		Dog &operator=(const Dog &copy);
		virtual ~Dog(void);

		void	makeSound(void) const;
	private:
		Brain* _brain;
};
#endif