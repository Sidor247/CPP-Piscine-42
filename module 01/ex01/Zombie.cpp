/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 03:01:59 by cwhis             #+#    #+#             */
/*   Updated: 2021/09/27 18:55:02 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie ( void ) {}

Zombie::Zombie( std::string name ) : _name(name) {}

Zombie::~Zombie( void )
{
	std::cout << "Zombie <" << _name << "> died again" << std::endl;
}

void	Zombie::announce( void ) const
{
	std::cout << "<" << _name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}
