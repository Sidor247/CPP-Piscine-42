/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 16:36:59 by cwhis             #+#    #+#             */
/*   Updated: 2021/09/27 01:40:51 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>

#include "Contact.hpp"

class PhoneBook
{
public:

	PhoneBook( void );
	~PhoneBook( void );

	int		getSize( void ) const;
	void	start( void );

private:	
	Contact _array[8];
	int		_size;
	int		_nextAddIndex;

	void 		_add( void );
	void 		_search( void ) const;
	void 		_indexSearch( void ) const;
	std::string _contactString( const std::string& s ) const;
};

#endif