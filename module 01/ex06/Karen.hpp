/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 19:24:31 by cwhis             #+#    #+#             */
/*   Updated: 2021/09/30 19:28:03 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>
#include <string>

class	Karen
{
public:
	void complain( std::string level );
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
};

#endif