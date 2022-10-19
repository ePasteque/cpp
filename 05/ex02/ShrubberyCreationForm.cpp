/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 13:27:05 by lbattest          #+#    #+#             */
/*   Updated: 2022/10/19 17:40:20 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :  Form("ShrubberyCreationForm", 145, 137) {
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : Form(copy.getName(), copy.getSignGrade(), copy.getExecGrade()) {
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
	*this = copy;	
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy) {
	this->_target = copy._target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const &exec) const {
	if (this->canExec(exec) == false)
		return ;
	std::cout << exec.getName() << " executed " << this->getName() << std::endl;
	std::string		new_file = this->_target + "_shrubbery";
  	std::ofstream	ofs(new_file);
	std::string tree = "                                                     .\n                                            .         ;  \n                .              .              ;%     ;;   \n                  ,           ,                :;%  %;   \n                  :         ;                   :;%;'     .,   \n          ,.        %;     %;            ;        %;'    ,;\n            ;       ;%;  %%;        ,     %;    ;%;    ,%'\n            %;       %;%;      ,  ;       %;  ;%;   ,%;' \n              ;%;      %;        ;%;        % ;%;  ,%;'\n              `%;.     ;%;     %;'         `;%%;.%;'\n                `:;%.    ;%%. %@;        %; ;@%;%'\n                  `:%;.  :;bd%;          %;@%;'\n                    `@%:.  :;%.         ;@@%;'   \n                      `@%.  `;@%.      ;@@%;         \n                        `@%%. `@%%    ;@@%;        \n                          ;@%. :@%%  %@@%;       \n                            %@bd%%%bd%%:;     \n                              #@%%%%%:;;\n                              %@@%%%::;\n                              %@@@%(o);  . '         \n                              %@@@o%;:(.,'         \n                          `.. %@@@o%::;         \n                              `)@@@o%::;         \n                              %@@(o)::;        \n                              .%@@@@%::;         \n                              ;%@@@@%::;.          \n                            ;%@@@@%%:;;;. \n                        ...;%@@@@@%%:;;;;,..";
	ofs << tree;
	ofs.close();
}