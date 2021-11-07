/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:49:41 by cwhis             #+#    #+#             */
/*   Updated: 2021/11/05 00:22:06 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():
	Form("no_name", "empty", 72, 45)
{
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target):
	Form("no_name", target, 72, 45)
{
	std::cout	<< "RobotomyRequestForm constructor with target "
				<< target << " called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src):
	Form(src)
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;	
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	Form::operator=(rhs);
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
		throw(GradeTooLowException, FormIsNotSignedException)
{
	execCheck(executor);

	std::cout << "DRILLING NOISES" << std::endl;
	srand(time(NULL));
	if (rand() % 2)
		std::cout	<< "<" << getTarget()
					<< "> has been robotomized successfully"
					<< std::endl;
	else
		std::cout	<< "<" << getTarget()
					<< "> has been robotomized with failure"
					<< std::endl;
}