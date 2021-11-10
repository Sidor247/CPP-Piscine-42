/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 19:25:40 by cwhis             #+#    #+#             */
/*   Updated: 2021/11/08 13:49:52 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
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

	Bureaucrat();
	Bureaucrat( std::string const &name, int grade )
		throw(GradeTooHighException, GradeTooLowException);
	Bureaucrat( Bureaucrat const &src );
	Bureaucrat	&operator=( Bureaucrat const &rhs );
	~Bureaucrat();

	void increment( void ) throw(GradeTooHighException);
	void decrement( void ) throw(GradeTooLowException);
	
	std::string	const	&getName( void ) const;
	int					getGrade( void ) const;

	void	signForm(Form &f) const;

private:
	std::string	const _name;
	int			_grade;
};

std::ostream	&operator<<( std::ostream &lhs, Bureaucrat const &rhs );

#endif
