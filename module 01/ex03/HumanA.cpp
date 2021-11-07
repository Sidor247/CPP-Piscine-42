/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 23:47:43 by cwhis             #+#    #+#             */
/*   Updated: 2021/09/29 17:06:11 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA( std::string name, Weapon &weapon ): name(name), weapon(weapon) {}

void	HumanA::attack( void ) const
{
	std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}