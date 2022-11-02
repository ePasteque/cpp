/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:06:27 by lbattest          #+#    #+#             */
/*   Updated: 2022/11/02 11:47:28 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6};

    iter(array, 6, print);

	std::cout << "-----------------------------" << std::endl;

    float array2[] = {42.0f, 435.56f, 32.0f};
    iter(array2, 3, print);

	std::cout << "-----------------------------" << std::endl;
    
    std::string array3[] = {"salut", "les", "amis"};
    iter(array3, 3, print);
}