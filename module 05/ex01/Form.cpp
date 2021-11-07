/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 01:45:41 by cwhis             #+#    #+#             */
/*   Updated: 2021/11/02 15:30:19 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name("empty"), _signGrade(1), _execGrade(1), _isSigned(false)
{
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(std::string const &name, int const signGrade, int const execGrade)
	throw(GradeTooHighException, GradeTooLowException):
	_name(name), _signGrade(signGrade), _execGrade(execGrade), _isSigned(false)
{
	std::cout	<< "Form constructor with name " << name
				<< ", grade to sign " << signGrade
				<< ", grade to execute " << execGrade
				<< " called" << std::endl;
	if (signGrade < 1 || execGrade < 1)
		throw Form::GradeTooHighException();
	if (signGrade > 150 || execGrade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const &src):
	_name(src._name),
	_signGrade(src._signGrade),
	_execGrade(src._execGrade),
	_isSigned(src._isSigned)
{
	std::cout << "Form copy constructor called" << std::endl;
}

Form	&Form::operator=(Form const &rhs)
{
	(void)rhs;
	std::cout << "Can't assign new values to constant attributes" << std::endl;
	return (*this);
}

Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
}

std::string	const	&Form::getName() const
{
	return (_name);
}

int	Form::getSignGrade() const
{
	return (_signGrade);
}

int	Form::getExecGrade() const
{
	return (_execGrade);
}

bool	Form::getIsSigned() const
{
	return (_isSigned);
}

void	Form::beSigned(Bureaucrat const &b) throw(GradeTooLowException)
{
	if (b.getGrade() > _signGrade)
		throw GradeTooLowException();
	_isSigned = true;
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

std::ostream	&operator<<(std::ostream &lhs, Form const &rhs)
{
	lhs << "<" << rhs.getName()
		<< ">, form grade to sign <" << rhs.getSignGrade()
		<< ">, grade to execute <" << rhs.getExecGrade()
		<< ">, is signed <" << rhs.getIsSigned() << ">";
	return lhs;
}