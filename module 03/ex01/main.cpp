/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:33:33 by cwhis             #+#    #+#             */
/*   Updated: 2021/10/19 13:28:14 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main( void )
{
	ScavTrap	a("Trap");
	ScavTrap	b;
	ScavTrap	c(a);

	a.attack("George");
	a.beRepaired(500);
	a.takeDamage(1000);
	a.guardGate();
	b = a;
	b.beRepaired(500);
	b.attack("George");
	b.beRepaired(500);
	b.guardGate();
	c.attack("George");
	c.beRepaired(500);
	c.takeDamage(1000);
	c.guardGate();
}
