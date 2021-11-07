/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:33:33 by cwhis             #+#    #+#             */
/*   Updated: 2021/10/19 13:48:19 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main( void )
{
	FragTrap	a("Trap");
	FragTrap	b;
	FragTrap	c(a);

	a.attack("George");
	a.beRepaired(500);
	a.takeDamage(1000);
	a.highFivesGuys();
	b = a;
	b.beRepaired(500);
	b.attack("George");
	b.beRepaired(500);
	b.highFivesGuys();
	c.attack("George");
	c.beRepaired(500);
	c.takeDamage(1000);
	c.highFivesGuys();
}
