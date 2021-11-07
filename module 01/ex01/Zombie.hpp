/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 02:08:41 by cwhis             #+#    #+#             */
/*   Updated: 2021/09/27 18:54:43 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
private:
	std::string	_name;

public:
	Zombie( void );
	Zombie( std::string name );
	~Zombie( void );

	void	announce( void ) const;
};

Zombie* zombieHorde( int N, std::string name );

# endif