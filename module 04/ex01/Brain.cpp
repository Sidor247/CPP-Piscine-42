/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 12:26:21 by cwhis             #+#    #+#             */
/*   Updated: 2021/10/26 18:56:08 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain( Brain const &src )
{
	std::cout << "Brain copy constructor called" << std::endl;
	for ( int i = 0; i < 100; ++i)
		_ideas[i] = src._ideas[i];
}

Brain	&Brain::operator=( Brain const &rhs )
{
	std::cout << "Brain assignation operator called" << std::endl;

    if (&rhs == this)
        return (*this);
	for ( int i = 0; i < 100; ++i)
		_ideas[i] = rhs._ideas[i];
	return (*this);
}

Brain::~Brain( void )
{
	std::cout << "Brain destructor called" << std::endl;
}