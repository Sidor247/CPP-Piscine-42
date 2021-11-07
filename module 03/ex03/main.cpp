/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:33:33 by cwhis             #+#    #+#             */
/*   Updated: 2021/10/24 20:00:53 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main( void )
{
	std::cout << std::endl;
	DiamondTrap	a("Trap");
	std::cout << std::endl;
	DiamondTrap	b;
	std::cout << std::endl;
	DiamondTrap	c(a);

	std::cout << std::endl;

	a.attack("George");
	a.beRepaired(500);
	a.takeDamage(1000);
	a.highFivesGuys();
	a.guardGate();
	a.whoAmI();

	b = a;

	std::cout << std::endl;
	
	b.beRepaired(500);
	b.attack("George");
	b.beRepaired(500);
	b.highFivesGuys();
	b.guardGate();
	b.whoAmI();

	std::cout << std::endl;

	c.attack("George");
	c.beRepaired(500);
	c.takeDamage(1000);
	c.highFivesGuys();
	c.guardGate();
	c.whoAmI();

	std::cout << std::endl;

	return (0);
}
