/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 23:54:23 by cwhis             #+#    #+#             */
/*   Updated: 2021/09/29 17:06:02 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB( std::string name ): name(name), weapon(NULL) {}

void	HumanB::setWeapon( Weapon &weapon )
{
	this->weapon = &weapon;
}

void	HumanB::attack( void ) const
{
	std::cout	<< name << " attacks with his "
				<< (weapon ? weapon->getType() : std::string("no weapon"))
				<< std::endl;
}
