/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:33:33 by cwhis             #+#    #+#             */
/*   Updated: 2021/10/24 18:33:57 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main( void )
{
	ClapTrap	a("Trap");
	ClapTrap	b;
	ClapTrap	c(a);

	a.attack("George");
	a.beRepaired(500);
	a.takeDamage(1000);
	b = a;
	b.beRepaired(500);
	b.attack("George");
	b.beRepaired(500);
	c.attack("George");
	c.beRepaired(500);
	c.takeDamage(1000);
}
