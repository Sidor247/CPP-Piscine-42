/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 19:25:34 by cwhis             #+#    #+#             */
/*   Updated: 2021/11/02 14:23:36 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ): _name("empty"), _grade(1)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat( std::string const &name, int grade )
	throw(GradeTooHighException, GradeTooLowException)
	: _name(name), _grade(grade)
{
	std::cout	<< "Bureaucrat constructor with name " << name
				<< " and grade " << grade << " called"
				<< std::endl;
	
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat( Bureaucrat const &src ):
	_name(src._name), _grade(src._grade)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat	&Bureaucrat::operator=( Bureaucrat const &rhs )
{
	if (&rhs == this)
		return (*this);
	_name = rhs._name;
	_grade = rhs._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

void Bureaucrat::increment( void ) throw(Bureaucrat::GradeTooHighException)
{
	if (--_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrement( void ) throw(Bureaucrat::GradeTooLowException)
{
	if (++_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

std::string	Bureaucrat::getName( void ) const
{
	return (_name);
}

int	Bureaucrat::getGrade( void ) const
{
	return (_grade);
}

void	Bureaucrat::signForm(Form &f) const
{
	try
	{
		f.beSigned(*this);
	}
	catch (std::exception & e)
	{
		std::cout	<< "<" << _name
					<< "> cannot sign <" << f.getName()
					<< "> because <" << e.what()
					<< ">" << std::endl;
	}
}

std::ostream	&operator<<( std::ostream &lhs, Bureaucrat const &rhs )
{
	lhs	<< "<" << rhs.getName() << ">, bureaucrat grade <"
		<< rhs.getGrade() << ">";
	
	return (lhs);
}