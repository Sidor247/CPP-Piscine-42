/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 00:58:47 by cwhis             #+#    #+#             */
/*   Updated: 2021/10/25 01:02:25 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ): _type("empty")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( std::string const &type ): _type(type)
{
	std::cout << "WrongAnimal constructor with type " << type << " called" << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal const &src ): _type(src._type)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &rhs)
{
	_type = rhs._type;
	return (*this);
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

std::string	WrongAnimal::getType( void ) const
{
	return (_type);
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "[wrong animal sound]" << std::endl;
}