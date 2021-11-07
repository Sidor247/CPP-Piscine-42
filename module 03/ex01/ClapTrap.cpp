/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:33:26 by cwhis             #+#    #+#             */
/*   Updated: 2021/10/24 18:20:55 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string const &name ):
	_name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap constructor with parameter name " << name << " called" << std::endl;
}

ClapTrap::ClapTrap( void ):
	_name("no_name"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const &src ):
	_name(src._name), _hitPoints(src._hitPoints), _energyPoints(src._energyPoints), _attackDamage(src._attackDamage)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(std::string const &target)
{
	std::cout	<< "ClapTrap " << _name << " attacks " << target
				<< ", causing " << _attackDamage << " points of damage!"
				<< std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout 	<< "ClapTrap " << _name << " takes " << amount << " points of damage!"
				<< std::endl;
	this->_hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout 	<< "ClapTrap " << _name << " was repaired by " << amount << " points!"
				<< std::endl;
	this->_hitPoints += amount;
}

ClapTrap	&ClapTrap::operator=( ClapTrap const &rhs )
{
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return (*this);
}
