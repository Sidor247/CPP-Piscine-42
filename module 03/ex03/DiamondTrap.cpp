/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:47:57 by cwhis             #+#    #+#             */
/*   Updated: 2021/10/19 17:48:27 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ):
	ClapTrap(),
	FragTrap(),
	ScavTrap(),
	_name("no_name")
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	ClapTrap::_name += "_clap_name";
}
DiamondTrap::DiamondTrap( std::string const &name ):
	ClapTrap(name + "_clap_name"),
	FragTrap(name + "_clap_name"),
	ScavTrap(name + "_clap_name"),
	_name(name)
{
	std::cout << "DiamondTrap constructor with parameter name " << name << " called" << std::endl;
}

DiamondTrap::DiamondTrap( DiamondTrap const &src ):
	ClapTrap(src),
	FragTrap(src),
	ScavTrap(src),
	_name(src._name)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=( DiamondTrap const &rhs )
{
	ClapTrap::operator=(rhs);
	return (*this);
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void	DiamondTrap::whoAmI( void )
{
	std::cout	<< "I am DiamondTrap " << _name
				<< " with clapName " << ClapTrap::_name
				<< std::endl;
}
