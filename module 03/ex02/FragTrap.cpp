/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 12:54:40 by cwhis             #+#    #+#             */
/*   Updated: 2021/10/24 18:53:28 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ): ClapTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap( std::string name ): ClapTrap(name)
{
	std::cout << "FragTrap constructor with name " << name << " parameter called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap( FragTrap const &src ): ClapTrap(src)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap	&FragTrap::operator=( FragTrap const &rhs )
{
	ClapTrap::operator=(rhs);
	return (*this);
}

void FragTrap::highFivesGuys( void ) const
{
	std::cout << "FragTrap " << _name << ": High five guys!" << std::endl;
}