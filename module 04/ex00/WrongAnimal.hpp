/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 00:56:14 by cwhis             #+#    #+#             */
/*   Updated: 2021/10/25 00:59:27 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
public:
	WrongAnimal( void );
	WrongAnimal( std::string const &type );
	WrongAnimal( WrongAnimal const &src );
	WrongAnimal	&operator=(WrongAnimal const &rhs);
	~WrongAnimal( void );

	std::string	getType( void ) const;

	void	makeSound( void ) const;

protected:
	std::string	_type;
};

#endif