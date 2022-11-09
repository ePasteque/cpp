/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:25:24 by lbattest          #+#    #+#             */
/*   Updated: 2022/11/09 18:28:22 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT
#define CAT
#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal {
	public:
		Cat(void);
		Cat(Cat &copy);
		Cat &operator=(const Cat &copy);
		virtual ~Cat(void);

		void	makeSound(void) const;
	private:
		Brain* _brain;
};
#endif