/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 19:51:47 by cwhis             #+#    #+#             */
/*   Updated: 2021/09/30 19:57:43 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main( int argc, char **argv )
{
	Karen	karen;

	if (argc == 2)
	{
		karen.complain(*(argv + 1));
		return (EXIT_SUCCESS);
	}
	return (EXIT_FAILURE);
}