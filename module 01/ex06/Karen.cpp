/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 19:26:25 by cwhis             #+#    #+#             */
/*   Updated: 2021/09/30 19:59:28 by cwhis            ###   ########.fr       */
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
	int i;
	for ( i = 0; i < 4; i++ )
		if ( name == complaintLevels[i] )
			break ;
	switch (i)
	{
	case 0:
		debug();
	case 1:
		info();
	case 2:
		warning();
	case 3:
		error();
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

void	Karen::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pic"
		"kle-special-ketchup burger. I just love it!" << std::endl << std::endl;
}

void	Karen::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You don’"
		"t put enough! If you did I would not have to ask for it!" << std::endl << std::endl;
}

void	Karen::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout 	<< "I think I deserve to have some extra bacon for free." << std::endl
				<< "I’ve been coming here for years and you just started working here last month."
				<< std::endl << std::endl;
}

void	Karen::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now."
		<< std::endl << std::endl;
}
