/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 20:03:04 by cwhis             #+#    #+#             */
/*   Updated: 2021/10/13 00:30:15 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>


Fixed::Fixed( void ): _value(0)
{
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( Fixed const &src )
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed( int const value )
{
	//std::cout << "Int constructor called" << std::endl;
	this->_value = value << _nofb;
}

Fixed::Fixed( float const value )
{
	//std::cout << "Float constructor called" << std::endl;
	this->_value = (int)(roundf((float)(1 << _nofb) * value));
}

Fixed::~Fixed( void )
{
	//std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=( Fixed const &rhs )
{
	//std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
		this->_value = rhs.getRawBits();
	return *this;
}

int		Fixed::getRawBits( void ) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return _value;
}

void	Fixed::setRawBits( int const raw )
{
	//std::cout << "setRawBits member function called" << std::endl;
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

bool	Fixed::operator>( Fixed const &rhs ) const
{
	return (this->_value > rhs.getRawBits());
}

bool	Fixed::operator<( Fixed const &rhs ) const
{
	return (this->_value < rhs.getRawBits());
}

bool	Fixed::operator>=( Fixed const &rhs ) const
{
	return (this->_value >= rhs.getRawBits());
}

bool	Fixed::operator<=( Fixed const &rhs ) const
{
	return (this->_value <= rhs.getRawBits());
}

bool	Fixed::operator==( Fixed const &rhs ) const
{
	return (this->_value == rhs.getRawBits());
}

bool	Fixed::operator!=( Fixed const &rhs ) const
{
	return (this->_value != rhs.getRawBits());
}

Fixed	Fixed::operator+( Fixed const &rhs ) const
{
	Fixed	res;

	res.setRawBits(this->_value + rhs.getRawBits());
	return (res);
}

Fixed	Fixed::operator-( Fixed const &rhs ) const
{
	Fixed	res;

	res.setRawBits(this->_value - rhs.getRawBits());
	return (res);
}

Fixed	Fixed::operator*( Fixed const &rhs ) const
{
	Fixed	res;
	long	n1 = (long)this->_value;
	long	n2 = (long)rhs._value;

	res.setRawBits(n1 * n2 / (1 << _nofb));
	return (res);
}

Fixed	Fixed::operator/( Fixed const &rhs ) const
{
	Fixed	res;
	long	n1 = (long)this->_value;
	long	n2 = (long)rhs._value;

	res.setRawBits(n1 * (1 << _nofb) / n2);
	return (res);
}

Fixed	&Fixed::operator++( void )
{
	this->_value++;
	return (*this);
}

Fixed	&Fixed::operator--( void )
{
	this->_value--;
	return (*this);
}

Fixed	Fixed::operator++( int const null )
{
	Fixed	copy( *this );

	this->_value++;
	return (copy);
}

Fixed	Fixed::operator--( int const null )
{
	Fixed	copy( *this );

	this->_value--;
	return (copy);
}

Fixed		&Fixed::min(Fixed &lhs, Fixed &rhs)
{
	return (lhs._value > rhs._value ? rhs : lhs);
}

Fixed const	&Fixed::min(Fixed const &lhs, Fixed const &rhs)
{
	return (lhs._value > rhs._value ? rhs : lhs);
}

Fixed		&Fixed::max(Fixed &lhs, Fixed &rhs)
{
	return (lhs._value > rhs._value ? lhs : rhs);
}

Fixed const	&Fixed::max(Fixed const &lhs, Fixed const &rhs)
{
	return (lhs._value > rhs._value ? lhs : rhs);
}

const int Fixed::_nofb = 8;

std::ostream	&operator<<( std::ostream &lhs, Fixed const &rhs )
{
	lhs << rhs.toFloat();
	return (lhs);
}