/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 01:44:11 by cwhis             #+#    #+#             */
/*   Updated: 2021/11/08 13:22:48 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main( void )
{
	try
	{
		Bureaucrat	b;
		std::cout << b << std::endl;
		ShrubberyCreationForm	f1("home");
		RobotomyRequestForm		f2("plant");
		PresidentialPardonForm	f3("prisoner");
		std::cout << f1 << std::endl;
		std::cout << f2 << std::endl;
		std::cout << f3 << std::endl;
		b.signForm(f1);
		b.executeForm(f1);
		b.signForm(f2);
		b.executeForm(f2);
		b.signForm(f3);
		b.executeForm(f3);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << std::endl;
		Bureaucrat	b("Bob", 60);
		std::cout << b << std::endl;
		ShrubberyCreationForm	f1("home");
		RobotomyRequestForm		f2("plant");
		PresidentialPardonForm	f3("prisoner");
		std::cout << f1 << std::endl;
		std::cout << f2 << std::endl;
		std::cout << f3 << std::endl;
		b.signForm(f1);
		b.executeForm(f1);
		b.signForm(f2);
		b.executeForm(f2);
		b.signForm(f3);
		b.executeForm(f3);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << std::endl;
		Bureaucrat	b;
		std::cout << b << std::endl;
		RobotomyRequestForm	f("plant");
		std::cout << f << std::endl;
		b.signForm(f);
		b.executeForm(f);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}