/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 23:59:23 by cwhis             #+#    #+#             */
/*   Updated: 2021/10/26 18:53:28 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
public:
	Animal( void );
	Animal( std::string const &type );
	Animal( Animal const &src );
	Animal	&operator=(Animal const &rhs);

	std::string	getType( void ) const;

	virtual void	makeSound( void ) const;
	virtual 		~Animal( void );
protected:
	std::string	_type;
};

#endif