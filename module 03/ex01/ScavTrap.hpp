/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 18:02:04 by cwhis             #+#    #+#             */
/*   Updated: 2021/10/24 18:31:23 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
public:
	ScavTrap( void );
	ScavTrap( std::string const &name );
	ScavTrap( ScavTrap const &src );
	~ScavTrap( void );

	void	guardGate( void );

	ScavTrap	&operator=( ScavTrap const &rhs );
};

#endif