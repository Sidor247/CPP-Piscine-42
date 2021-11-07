/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 16:54:49 by cwhis             #+#    #+#             */
/*   Updated: 2021/09/30 17:40:47 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void	Karen::complain( std::string name )
{
	std::string complaintLevels[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	void	(Karen::*ptrs[])( void ) = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};
	int i;
	for ( i = 0; i < 4; i++ )
		if ( name == complaintLevels[i] )
			break ;
	for ( ; i < 4; i++)
		(this->*ptrs[i])();
}

void	Karen::debug( void )
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pic"
		"kle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info( void )
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’"
		"t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve bee"
		"n coming here for years and you just started working here last month."
		<< std::endl;
}

void	Karen::error( void )
{
	std::cout << "This is unacceptable, I want to speak to the manager now."
		<< std::endl;
}
