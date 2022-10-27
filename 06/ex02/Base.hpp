/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:23:48 by lbattest          #+#    #+#             */
/*   Updated: 2022/10/27 16:58:15 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stdexcept>

class Base {
	public:
		virtual ~Base() {};
};

class A : public Base {
	public:
		virtual ~A() {};
};

class B : public Base {
	public:
		virtual ~B() {};
};

class C : public Base {
	public:
		virtual ~C() {};
};

// void identify(Base& p);
// void identify(Base* p);
// Base* generate();