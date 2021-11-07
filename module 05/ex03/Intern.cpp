/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:47:23 by cwhis             #+#    #+#             */
/*   Updated: 2021/11/05 13:36:17 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(Intern const &src)
{
	(void)src;
	std::cout << "Intern copy constructor called" << std::endl;
}

Intern	&Intern::operator=(Intern const &rhs)
{
	(void)rhs;
	std::cout << "Intern assignation operator called" << std::endl;	
	return (*this);
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
}

Form	*Intern::createShrubberyCreationForm(std::string const & target) const
{
	std::cout << "Intern creates <shrubbery creation form>" << std::endl;
	return new ShrubberyCreationForm(target);
}

Form	*Intern::createRobotomyRequestForm(std::string const & target) const
{
	std::cout << "Intern creates <robotomy request form>" << std::endl;
	return new RobotomyRequestForm(target);
}

Form	*Intern::createPresidentialPardonForm(std::string const & target) const
{
	std::cout << "Intern creates <presidential pardon form>" << std::endl;
	return new PresidentialPardonForm(target);
}

Form	*Intern::createNothing(std::string const &target) const
{
	(void)target;
	std::cout << "Intern can't create form" << std::endl;
	return nullptr;
}

Form	*Intern::makeForm(std::string const &name, std::string const &target) const
{
	std::string	forms[3] =
	{
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	Form	*(Intern::*f_arr[4])(std::string const &target) const =
	{
		&Intern::createShrubberyCreationForm,
		&Intern::createRobotomyRequestForm,
		&Intern::createPresidentialPardonForm,
		&Intern::createNothing
	};
	int	i;
	for ( i = 0; i < 3; ++i )
		if (forms[i] == name)
			break;
	return ((this->*f_arr[i])(target));
}