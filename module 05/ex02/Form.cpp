/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 01:45:41 by cwhis             #+#    #+#             */
/*   Updated: 2021/11/04 12:31:33 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name("no_name"), _target("empty"),
	_signGrade(1), _execGrade(1), _isSigned(false)
{
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(std::string const &name, std::string const &target,
	int const signGrade, int const execGrade)
	throw(GradeTooHighException, GradeTooLowException):
	_name(name), _target(target),
	_signGrade(signGrade), _execGrade(execGrade), _isSigned(false)
{
	std::cout	<< "Form constructor with name " << name
				<< ", target " << target
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
	_target(src._target),
	_signGrade(src._signGrade),
	_execGrade(src._execGrade),
	_isSigned(src._isSigned)
{
	std::cout << "Form copy constructor called" << std::endl;
}

Form	&Form::operator=(Form const &rhs)
{
	(void)rhs;
	std::cerr << "Can't assign new values to constant attributes" << std::endl;
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

std::string const	&Form::getTarget() const
{
	return (_target);
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

void	Form::execCheck(Bureaucrat const & executor) const
		throw(GradeTooLowException, FormIsNotSignedException)
{
	if (!getIsSigned())
		throw FormIsNotSignedException();
	if (executor.getGrade() > getExecGrade())
		throw GradeTooLowException();
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

const char	*Form::FormIsNotSignedException::what() const throw()
{
	return "Form is not signed";
}

std::ostream	&operator<<(std::ostream &lhs, Form const &rhs)
{
	lhs << "<" << rhs.getName()
		<< ">, form grade to sign <" << rhs.getSignGrade()
		<< ">, grade to execute <" << rhs.getExecGrade()
		<< ">, is signed <" << rhs.getIsSigned() << ">";
	return lhs;
}