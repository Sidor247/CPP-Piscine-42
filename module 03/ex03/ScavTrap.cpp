/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 18:01:51 by cwhis             #+#    #+#             */
/*   Updated: 2021/10/24 18:54:06 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ): ClapTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap( std::string const &name ): ClapTrap(name)
{
	std::cout << "ScavTrap constructor with parameter name " << name << " called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap( ScavTrap const &src ): ClapTrap(src)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap destructor called" << std::endl;	
}

void	ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap have enterred in Gate keeper mode." << std::endl;
}

ScavTrap	&ScavTrap::operator=( ScavTrap const &rhs )
{
	ClapTrap::operator=(rhs);
	return (*this);
}
