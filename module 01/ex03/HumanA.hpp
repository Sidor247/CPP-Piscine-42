/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 22:20:57 by cwhis             #+#    #+#             */
/*   Updated: 2021/09/29 17:09:28 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
	Weapon		&weapon;
	std::string	name;

public:
	HumanA( std::string name, Weapon &weapon );

	void	attack( void ) const;
};

#endif