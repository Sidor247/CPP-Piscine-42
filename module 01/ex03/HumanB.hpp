/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 23:54:39 by cwhis             #+#    #+#             */
/*   Updated: 2021/09/29 17:06:24 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
	Weapon		*weapon;
	std::string	name;

public:
	HumanB( std::string name );

	void	setWeapon( Weapon &weapon );
	void	attack( void ) const;
};

#endif