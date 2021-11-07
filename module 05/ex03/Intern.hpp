/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:41:20 by cwhis             #+#    #+#             */
/*   Updated: 2021/11/05 13:31:04 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>



class Intern
{
public:
	Intern();
	Intern(Intern const &src);
	Intern	&operator=(Intern const &rhs);
	~Intern();

	Form	*makeForm(std::string const &name, std::string const &target) const;
private:
	Form	*createShrubberyCreationForm(std::string const & target) const;
	Form	*createRobotomyRequestForm(std::string const & target) const;
	Form	*createPresidentialPardonForm(std::string const & target) const;
	Form	*createNothing(std::string const &target) const;
};

#endif