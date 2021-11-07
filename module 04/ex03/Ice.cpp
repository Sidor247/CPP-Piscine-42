/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 19:09:20 by cwhis             #+#    #+#             */
/*   Updated: 2021/10/28 02:17:01 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ): AMateria("ice")
{
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice( Ice const &src ): AMateria(src)
{
	std::cout << "Ice copy constructor called" << std::endl;
}

Ice	&Ice::operator=( Ice const &rhs )
{
	std::cout << "Ice assignation operator called" << std::endl;
	if (&rhs == this)
		return (*this);
	AMateria::operator=(rhs);
	return (*this);
}

Ice::~Ice( void )
{
	std::cout << "Ice destructor called" << std::endl;
}

AMateria* Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
