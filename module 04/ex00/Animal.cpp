/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 00:02:05 by cwhis             #+#    #+#             */
/*   Updated: 2021/10/26 18:46:23 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ): _type("empty")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal( std::string const &type ): _type(type)
{
	std::cout << "Animal constructor with type " << type << " called" << std::endl;
}

Animal::Animal( Animal const &src ): _type(src._type)
{
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal	&Animal::operator=(Animal const &rhs)
{
	std::cout << "Animal assignation operator called" << std::endl;
	if (&rhs == this)
		return (*this);
	_type = rhs._type;
	return (*this);
}

Animal::~Animal( void )
{
	std::cout << "Animal destructor called" << std::endl;
}

std::string	Animal::getType( void ) const
{
	return (_type);
}

void	Animal::makeSound( void ) const
{
	std::cout << "[animal default sound]" << std::endl;
}
