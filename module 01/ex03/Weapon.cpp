/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 22:17:13 by cwhis             #+#    #+#             */
/*   Updated: 2021/09/28 00:17:10 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ): type(type) {}

std::string	Weapon::getType( void ) const
{
	return (type);
}

void		Weapon::setType( std::string type )
{
	this->type = type;
}
