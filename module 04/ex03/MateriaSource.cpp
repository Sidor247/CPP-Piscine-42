/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 01:04:31 by cwhis             #+#    #+#             */
/*   Updated: 2021/10/28 01:53:07 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ): _size(0)
{
	std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::MateriaSource( MateriaSource const &src ): _size(src._size)
{
	std::cout << "MateriaSource copy constructor called" << std::endl;

	for ( int i = 0; i < _size; ++i )
		_storage[i] = src._storage[i]->clone();
}

MateriaSource	&MateriaSource::operator=( MateriaSource const &rhs )
{
	std::cout << "MateriaSource assignation operator called" << std::endl;

	if (&rhs == this)
		return (*this);
	for ( int i = 0; i < _size; ++i )
		delete _storage[i];
	_size = rhs._size;
	for ( int i = 0; i < _size; ++i )
		_storage[i] = rhs._storage[i]->clone();
	return (*this);
}

MateriaSource::~MateriaSource( void )
{
	std::cout << "MateriaSource destructor called" << std::endl;

	for ( int i = 0; i < _size; ++i )
		delete _storage[i];
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (!m || _size == 4)
		return ;
	_storage[_size++] = m;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for ( int i = 0; i < _size; ++i )
		if (_storage[i]->getType() == type)
			return (_storage[i]->clone());
	return (nullptr);	
}
