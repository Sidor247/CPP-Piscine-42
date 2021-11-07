/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 23:25:28 by cwhis             #+#    #+#             */
/*   Updated: 2021/10/29 16:58:47 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void ): _size(0), _name("")
{
	std::cout << "Character default constructor called" << std::endl;
}

Character::Character( std::string const &name ): _size(0), _name(name)
{
	std::cout << "Character constructor with name " << name << " called" << std::endl;
}

Character::Character( Character const &src ): _size(src._size)
{
	std::cout << "Character copy constructor called" << std::endl;
	
	for ( int i = 0; i < _size; ++i )
		_inventory[i] = src._inventory[i]->clone();
}

Character	&Character::operator=( Character const &rhs )
{
	std::cout << "Character assignation operator called" << std::endl;

	if (&rhs == this)
		return (*this);
	for ( int i = 0; i < _size; ++i )
		delete _inventory[i];
	_size = rhs._size;
	for ( int i = 0; i < _size; ++i )
		_inventory[i] = rhs._inventory[i]->clone();
	return (*this);
}

Character::~Character( void )
{
	std::cout << "Character destructor called" << std::endl;

	for ( int i = 0; i < _size; ++i )
		delete _inventory[i];
}

std::string const &Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria* m)
{
	if (_size == 4)
		return ;
	_inventory[_size++] = m;
}

void Character::unequip(int idx)
{
	if (idx >= _size)
		return ;
	for ( int i = idx; i < _size - 1; ++i )
		_inventory[i] = _inventory[i + 1];
	--_size;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= _size)
		return ;
	_inventory[idx]->use(target);	
}
