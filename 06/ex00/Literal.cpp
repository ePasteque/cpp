/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Literal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:02:17 by lbattest          #+#    #+#             */
/*   Updated: 2022/11/09 14:18:06 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Literal.hpp"

Literal::Literal(std::string value) {
	this->_value = value;
}

Literal::Literal(Literal const &copy) {
	*this = copy;
}

Literal &Literal::operator=(Literal const &copy) {
	this->_value = copy._value;
	return *this;
}

Literal::~Literal() {}

bool Literal::isChar() {
	const char *val = this->_value.c_str();

	if (this->_value.size() == 1 && (val[0] < 47 || val[0] > 58)) {
		return true;
	}
	return false;
}

bool Literal::isInt() {
	int i = 0;
	const char *val = this->_value.c_str();

	if (val[0] == '-') {
		i++;
	}
	while (val[i]) {
		if (!(val[i] > 47 && val[i] < 58)) {
			return false;
		}
		i++;
	}
	return true;
}

bool Literal::isFloat() {
	int i = 0;
	const char *val = this->_value.c_str();

	if (val[0] == '-') {
		i++;
	}
	if (this->_value == "") {
		return false;
	}
	if (this->_value == "nanf" || this->_value == "-inff" || this->_value == "+inff") {
		return true;
	}
	while (val[i + 1]) {
		if (!(val[i] > 47 && val[i] < 58) && val[i] != '.' && val[i + 1]) {
			return false;
		}
		i++;
	}
	if (val[i] == 'f') {
		return true;
	}
	return false;
}

bool Literal::isDouble() {
	int i = 0;
	const char *val = this->_value.c_str();

	if (val[0] == '-') {
		i++;
	}
	if (this->_value == "") {
		return false;
	}
	if (this->_value == "nanf" || this->_value == "-inff" || this->_value == "+inff") {
		return true;
	}
	while (val[i + 1]) {
		if (!(val[i] > 47 && val[i] < 58) && val[i] != '.' && val[i + 1]) {
			return false;
		}
		i++;
	}
	if (val[i] != 'f'){
		return true;
	}
	return false;
}

void Literal::print() {
	char			cval;
	int				ival;
	float			fval;
	double			dval;
	std::string		cstr;
	std::string		istr;
	std::string		fstr;
	std::string		dstr;
	unsigned int	selector = 0;

	if (this->isChar()) {
		cval = this->_value.c_str()[0];
		if (cval < 32) {
			cstr = "Non displayable";
			selector = 1;
		}
		else {
			cstr = cval;
		}
		ival = static_cast<int>(cval);
		fval = static_cast<float>(cval);
		dval = static_cast<double>(cval);
	}
	else if (this->isInt()) {
		istr = this->_value;
		ival = std::atoi(this->_value.c_str());
		if (this->_value == "0" || ival == 127) {
			cstr = "Non displayble";
			selector = 3;
		}
		else if (ival > 127) {
			cstr = "Impossible";
			selector = 3;
		}
		cval = static_cast<char>(ival);
		fval = static_cast<float>(ival);
		dval = static_cast<double>(ival);
	}
	else if (this->isFloat()){
		if (this->_value == "nanf") {
			cstr = "Impossible";
			istr = "Impossible";
			dstr = "nan";
			selector = 2;
		}
		else if (this->_value == "-inff") {
			cstr = "Impossible";
			istr = "Impossible";
			dstr = "-inf";
			selector = 2;
		}
		else if (this->_value == "+inff") {
			cstr = "Impossible";
			istr = "Impossible";
			dstr = "+inf";
			selector = 2;
		}
		else {
			fval = std::stof(this->_value);
			cval = static_cast<char>(fval);
			ival = static_cast<int>(fval);
			dval = static_cast<double>(fval);
		}
		fstr = this->_value;
	}
	else if (this->isDouble()) {
		if (this->_value == "nan") {
			cstr = "Impossible";
			istr = "Impossible";
			fstr = "nanf";
			selector = 2;
		}
		else if (this->_value == "-inf") {
			cstr = "Impossible";
			istr = "Impossible";
			fstr = "-inff";
			selector = 2;
		}
		else if (this->_value == "+inf") {
			cstr = "Impossible";
			istr = "Impossible";
			fstr = "+inff";
			selector = 2;
		}
		else {
			dval = std::atof(this->_value.c_str());
			cval = static_cast<char>(dval);
			ival = static_cast<int>(dval);
			fval = static_cast<float>(dval);
		}
		dstr = this->_value;
	}
	else {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
		return ;
	}
	switch (selector)
	{
	case 1:
		std::cout << "char: " << cstr << std::endl;
		std::cout << "int: " << ival << std::endl;
		std::cout << "float: " << fval << std::endl;
		std::cout << "double: " << dval << std::endl;
		break ;

	case 2:
		std::cout << "char: " << cstr << std::endl;
		std::cout << "int: " << istr << std::endl;
		std::cout << "float: " << fstr << std::endl;
		std::cout << "double: " << dstr << std::endl;
		break ;

	case 3:
		std::cout << "char: " << cstr << std::endl;
		std::cout << "int: " << ival << std::endl;
		std::cout << "float: " << fval << ".0f" << std::endl;
		std::cout << "double: " << dval << std::endl;
		break ;

	default:
		std::cout << selector << std::endl;
		if (cval > 31) {
			std::cout << "char: '" << cval << "'" << std::endl;
		}
		else if (cval > 0) {
			std::cout << "char: Non idsplayble" << std::endl;
		}
		else {
			std::cout << "char: Impossible" << std::endl;
		}
		std::cout << "int: " << ival << std::endl;
		if (fval == (int)fval) {
			std::cout << "float: " << fval << ".0f" << std::endl;
		}
		else {
			std::cout << "float: " << fval << "f" << std::endl;
		}
		if (dval == (int)dval) {
			std::cout << "double: " << dval << ".0" << std::endl;
		}
		else {
			std::cout << "double: " << dval << std::endl;
		}
		break ;
	}
}