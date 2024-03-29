/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 01:44:11 by cwhis             #+#    #+#             */
/*   Updated: 2021/11/08 13:40:50 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main( void )
{
	Intern	i;
	Form	*fp;

	fp = i.makeForm("shrubbery creation", "home");
	delete fp;
	std::cout << std::endl;
	fp = i.makeForm("robotomy request", "plant");
	delete fp;
	std::cout << std::endl;
	fp = i.makeForm("presidential pardon", "prisoner");
	delete fp;
	std::cout << std::endl;
	fp = i.makeForm("unknown_form", "unknown_target");
	return (0);
}