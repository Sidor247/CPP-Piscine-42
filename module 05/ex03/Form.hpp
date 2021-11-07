/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 01:44:46 by cwhis             #+#    #+#             */
/*   Updated: 2021/11/05 13:33:33 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form
{
public:
	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char *what( void ) const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char *what( void ) const throw();
	};

	class FormIsNotSignedException : public std::exception
	{
	public:
		virtual const char *what( void ) const throw();
	};

	Form();
	Form(Form const &src);
	Form(std::string const &name, std::string const &target,
		int const signGrade, int const execGrade)
		throw(GradeTooHighException, GradeTooLowException);
	Form	&operator=(Form const &rhs);
	virtual ~Form();

	std::string	const	&getName() const;
	std::string const	&getTarget() const;
	int					getSignGrade() const;
	int					getExecGrade() const;
	bool				getIsSigned() const;

	void			beSigned(Bureaucrat const &b)
					throw(GradeTooLowException);
	void			execCheck(Bureaucrat const & executor) const
					throw(GradeTooLowException, FormIsNotSignedException);
	virtual void	execute(Bureaucrat const & executor) const
					throw(GradeTooLowException, FormIsNotSignedException) = 0;

private:
	std::string	const	_name;
	std::string			_target;
	int const			_signGrade;
	int const			_execGrade;
	bool				_isSigned;
};

std::ostream	&operator<<(std::ostream &lhs, Form const &rhs);

#endif
