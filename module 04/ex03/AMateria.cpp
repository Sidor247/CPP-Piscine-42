/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 18:57:26 by cwhis             #+#    #+#             */
/*   Updated: 2021/10/28 02:06:21 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type): _type(type)
{
	std::cout << "AMateria constructor with type " << type << " called" << std::endl;
}

AMateria::AMateria( void ): _type("empty_type")
{
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria( AMateria const &src ): _type(src._type)
{
	std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria	&AMateria::operator=( AMateria const &rhs )
{
	std::cout << "AMateria assignation operator called" << std::endl;
	if (&rhs == this)
		return (*this);
	_type = rhs._type;
	return (*this);
}

AMateria::~AMateria( void )
{
	std::cout << "AMateria destructor called" << std::endl;
}

std::string const & AMateria::getType() const
{
	return (_type);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}