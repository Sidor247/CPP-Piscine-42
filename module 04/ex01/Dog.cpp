/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 00:23:54 by cwhis             #+#    #+#             */
/*   Updated: 2021/10/26 18:56:34 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ): Animal("Dog"), _brain(new Brain())
{
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog( Dog const &src ): Animal(src), _brain(new Brain(*src._brain))
{
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog	&Dog::operator=(Dog const &rhs)
{
	std::cout << "Dog assignation operator called" << std::endl;

    if (&rhs == this)
        return (*this);
	Animal::operator=(rhs);
	_brain = rhs._brain;
	return (*this);
}

Dog::~Dog( void )
{
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
}

void	Dog::makeSound( void ) const
{
	std::cout << "woof" << std::endl;
}