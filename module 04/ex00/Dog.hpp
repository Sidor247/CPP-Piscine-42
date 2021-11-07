/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 00:19:09 by cwhis             #+#    #+#             */
/*   Updated: 2021/10/25 01:05:17 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog( void );
	Dog( Dog const &src );
	Dog	&operator=(Dog const &rhs);
	~Dog( void );

	void	makeSound( void ) const;
};

#endif
