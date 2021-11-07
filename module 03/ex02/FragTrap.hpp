/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 12:54:50 by cwhis             #+#    #+#             */
/*   Updated: 2021/10/19 13:46:33 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
public:
	FragTrap( void );
	FragTrap( std::string name );
	FragTrap( FragTrap const &src );
	FragTrap	&operator=( FragTrap const &rhs );
	~FragTrap( void );

	void highFivesGuys( void ) const;
};



#endif