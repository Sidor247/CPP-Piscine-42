/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convertible.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:43:39 by cwhis             #+#    #+#             */
/*   Updated: 2021/11/10 12:35:30 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convertible.hpp"

Convertible::Convertible(): _value(0) {}

Convertible::Convertible(std::string const &literal): _value(std::stod(literal)) {}

Convertible::Convertible(Convertible const &src): _value(src._value) {}

Convertible	&Convertible::operator=(Convertible const &rhs)
{
	if (this == &rhs)
		return (*this);
	_value = rhs._value;
	return (*this);
}

Convertible::~Convertible() {}

void	Convertible::printAll() const
{
	printChar();
	printInt();
	printFloat();
	printDouble();
}

void	Convertible::printChar() const
{
	std::cout << "char: ";
	if (_value < static_cast<double>(std::numeric_limits<char>::min())
	||  _value > static_cast<double>(std::numeric_limits<char>::max())
	||  std::isnan(_value))
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	char c = static_cast<char>(_value);
	if (std::isprint(c))
		std::cout << '\''<< c << '\'' << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
}

void	Convertible::printInt() const
{
	std::cout << "int: ";
	if (_value < static_cast<double>(std::numeric_limits<int>::min())
	||  _value > static_cast<double>(std::numeric_limits<int>::max())
	||  std::isnan(_value))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(_value) << std::endl;
}

void	Convertible::printFloat() const
{
	std::cout << "float: ";
	if (_value < static_cast<double>(std::numeric_limits<float>::lowest())
	||  _value > static_cast<double>(std::numeric_limits<float>::max()))
	{
		if (_value == std::numeric_limits<double>::infinity())
			std::cout << "inff" << std::endl;
		else if ((_value == - std::numeric_limits<double>::infinity()))
			std::cout << "-inff" << std::endl;
		else
			std::cout << "impossible" << std::endl;
	}
	else
		std::cout	<< static_cast<float>(_value)
					<< (fmod(_value, 1) ? "" : ".0") << 'f' << std::endl;
}

void	Convertible::printDouble() const
{
	std::cout	<< "double: " << _value
				<< (fmod(_value, 1) ? "" : ".0") << std::endl;
}