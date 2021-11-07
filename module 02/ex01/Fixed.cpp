/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 18:27:19 by cwhis             #+#    #+#             */
/*   Updated: 2021/10/05 18:45:58 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed( void ): _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( Fixed const &src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed( int const value )
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = value << _nofb;
}

Fixed::Fixed( float const value )
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = (int)(roundf((float)(1 << _nofb) * value));
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=( Fixed const &rhs )
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
		this->_value = rhs.getRawBits();
	return *this;
}

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _value;
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

float	Fixed::toFloat( void ) const
{
	return ((float)(this->_value) / (float)(1 << _nofb));
}

int 	Fixed::toInt( void ) const
{
	return (_value >> _nofb);
}

const int Fixed::_nofb = 8;

std::ostream	&operator<<( std::ostream &lhs, Fixed const &rhs )
{
	lhs << rhs.toFloat();
	return (lhs);
}