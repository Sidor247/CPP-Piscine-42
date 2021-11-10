/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convertible.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:42:27 by cwhis             #+#    #+#             */
/*   Updated: 2021/11/09 19:31:41 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTIBLE_HPP
#define CONVERTIBLE_HPP

#include <iostream>
#include <limits>
#include <cctype>
#include <cmath>

class Convertible
{
public:
	Convertible();
	Convertible(std::string const &literal);
	Convertible(Convertible const &src);
	Convertible	&operator=(Convertible const &rhs);
	~Convertible();

	void	printAll() const;
private:
	double	_value;

	void	printChar() const;
	void	printInt() const;
	void	printFloat() const;
	void	printDouble() const;
};

#endif