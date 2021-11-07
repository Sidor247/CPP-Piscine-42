/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:57:49 by cwhis             #+#    #+#             */
/*   Updated: 2021/11/04 13:18:22 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():
	Form("no_name", "empty", 145, 137)
{
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target):
	Form("no_name", target, 145, 137)
{
	std::cout	<< "ShrubberyCreationForm constructor with target "
				<< target << " called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src):
	Form(src)
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;	
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	Form::operator=(rhs);
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
		throw(GradeTooLowException, FormIsNotSignedException)
{
	execCheck(executor);

	std::ofstream	file;
	file.open((getTarget() + "_shrubbery"));
    file
	<< "                                                     .\n"
    << "                                          .         ;\n"  
    << "             .              .              ;%     ;;\n"   
    << "               ,           ,                :;%  %;\n"
    << "                :         ;                   :;%;'     .,\n"
    << "       ,.        %;     %;            ;        %;'    ,;\n"
    << "         ;       ;%;  %%;        ,     %;    ;%;    ,%'\n"
    << "          %;       %;%;      ,  ;       %;  ;%;   ,%;'\n"
    << "           ;%;      %;        ;%;        % ;%;  ,%;'\n"
    << "            `%;.     ;%;     %;'         `;%%;.%;'\n"
    << "             `:;%.    ;%%. %@;        %; ;@%;%'\n"
    << "                `:%;.  :;bd%;          %;@%;'\n"
    << "                  `@%:.  :;%.         ;@@%;'\n" 
    << "                    `@%.  `;@%.      ;@@%;\n"     
    << "                      `@%%. `@%%    ;@@%;\n"      
    << "                        ;@%. :@%%  %@@%;\n"     
    << "                          %@bd%%%bd%%:;\n"   
    << "                            #@%%%%%:;;\n"
    << "                            %@@%%%::;\n"
    << "                            %@@@%(o);  . '\n"         
    << "                            %@@@o%;:(.,'\n"      
    << "                        `.. %@@@o%::;\n"
    << "                           `)@@@o%::;\n"      
    << "                            %@@(o)::;\n"      
    << "                           .%@@@@%::;\n"      
    << "                           ;%@@@@%::;.\n"        
    << "                          ;%@@@@%%:;;;.\n"
    << "                      ...;%@@@@@%%:;;;;,..\n"
	<< std::endl;
	file.close();
}