/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 00:27:08 by cwhis             #+#    #+#             */
/*   Updated: 2021/10/26 18:54:34 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ): Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat( Cat const &src ): Animal(src)
{
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat	&Cat::operator=(Cat const &rhs)
{
	std::cout << "Cat assignation operator called" << std::endl;
	if (&rhs == this)
		return (*this);
	Animal::operator=(rhs);
	return (*this);
}

Cat::~Cat( void )
{
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound( void ) const
{
	std::cout << "meow" << std::endl;
}