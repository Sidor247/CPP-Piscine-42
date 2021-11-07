/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 19:09:25 by cwhis             #+#    #+#             */
/*   Updated: 2021/10/28 02:15:58 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ): AMateria("cure")
{
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure( Cure const &src ): AMateria(src)
{
	std::cout << "Cure copy constructor called" << std::endl;
}

Cure	&Cure::operator=( Cure const &rhs )
{
	std::cout << "Cure assignation operator called" << std::endl;
	if (&rhs == this)
		return (*this);
	AMateria::operator=(rhs);
	return (*this);
}

Cure::~Cure( void )
{
	std::cout << "Cure destructor called" << std::endl;
}

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
