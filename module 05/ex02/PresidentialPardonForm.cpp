/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:16:10 by cwhis             #+#    #+#             */
/*   Updated: 2021/11/05 12:01:50 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():
	Form("no_name", "empty", 25, 5)
{
	std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target):
	Form("no_name", target, 25, 5)
{
	std::cout	<< "PresidentialPardonForm constructor with target "
				<< target << " called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src):
	Form(src)
{
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;	
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	Form::operator=(rhs);
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
		throw(GradeTooLowException, FormIsNotSignedException)
{
	execCheck(executor);

	std::cout	<< "<" << getTarget()
				<< "> has been pardoned by Zafod Beeblebrox."
				<< std::endl;
}