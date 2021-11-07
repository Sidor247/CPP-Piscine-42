/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 11:51:35 by cwhis             #+#    #+#             */
/*   Updated: 2021/09/27 15:01:41 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main( void )
{
	std::cout << "Stack allocation of zomie Ivan using constructor" << std::endl;
	Zombie	ivan("Ivan");
	ivan.announce();
	std::cout << "Heap allocation of zomie Peter using newZombie func" << std::endl;
	Zombie*	peter = newZombie("Peter");
	peter->announce();
	delete peter;
	std::cout << "Heap allocation of zomie Igor using randomChamp func" << std::endl;
	randomChump("Igor");
	return (0);
}