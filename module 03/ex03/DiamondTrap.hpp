/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:47:04 by cwhis             #+#    #+#             */
/*   Updated: 2021/10/24 18:09:58 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
public:
	DiamondTrap( void );
	DiamondTrap( std::string const &name );
	DiamondTrap( DiamondTrap const &src );
	DiamondTrap	&operator=( DiamondTrap const &rhs );
	~DiamondTrap( void );

	void	whoAmI( void );

	using	FragTrap::_hitPoints;
	using	ScavTrap::_energyPoints;
	using	FragTrap::_attackDamage;
	using	ScavTrap::attack;
private:
	std::string	_name;
};

