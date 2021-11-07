/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 01:44:11 by cwhis             #+#    #+#             */
/*   Updated: 2021/11/02 15:27:28 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main( void )
{
	try
	{
		Bureaucrat	b1;
		std::cout << b1 << std::endl;
		Form	f1;
		std::cout << f1 << std::endl;
		b1.signForm(f1);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat	b2("John", 2);
		std::cout << b2 << std::endl;
		Form	f2;
		std::cout << f2 << std::endl;
		b2.signForm(f2);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Form	f3("form3", 0, 1);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Form	f4("form4", 1, 200);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}