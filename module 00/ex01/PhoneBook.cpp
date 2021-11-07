/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 22:43:36 by cwhis             #+#    #+#             */
/*   Updated: 2021/09/27 01:40:13 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::_add( void )
{
	Contact newContact;
	std::cout << "Enter contact data" << std::endl;
	std::cout << "First name: ";
	std::getline(std::cin, newContact.firstName);
	std::cout << "Last name: ";
	std::getline(std::cin, newContact.lastName);
	std::cout << "Nickname: ";
	std::getline(std::cin, newContact.nickName);
	std::cout << "Phone number: ";
	std::getline(std::cin, newContact.phoneNumber);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, newContact.darkestSecret);
	_array[_nextAddIndex] = newContact;
	if (_nextAddIndex == 7)
		_nextAddIndex = 0;
	else
		_nextAddIndex++;
	if (_size != 8)
		_size++;
	std::cout << "The contact was successfully added" << std::endl;
}

void	PhoneBook::_search( void ) const
{
	std::cout << std::string(45, '-') << std::endl;
	std::cout 	<< "|" << std::setw(10) << "Index"
				<< "|" << std::setw(10) << "First name"
				<< "|" << std::setw(10) << "Last name"
				<< "|" << std::setw(10) << "Nickname"
				<< "|" << std::endl;
	std::cout << std::string(45, '-') << std::endl;
	for (int i = 0; i < _size; i++)
	{
		std::cout	<< "|" << std::setw(10) << i
					<< "|" << std::setw(10) << _contactString(_array[i].firstName)
					<< "|" << std::setw(10) << _contactString(_array[i].lastName)
					<< "|" << std::setw(10) << _contactString(_array[i].nickName)
					<< "|" << std::endl;
		std::cout << std::string(45, '-') << std::endl;
	}
	_indexSearch();
}

void	PhoneBook::_indexSearch( void ) const
{
	int i;

	std::cout << "Enter the index of contact to see more info (any other key to exit)" << std::endl;
	while (true)
	{
		std::cout << "Index: ";
		if ( !(std::cin >> i) || i < 0 || i > (_size - 1) )
		{
			std::cin.clear();
			std::cin.ignore(INT_MAX, '\n');
			break ;
		}
		std::cout << "First name: " << _array[i].firstName << std::endl;
		std::cout << "Last name: " << _array[i].lastName << std::endl;
		std::cout << "Nickname: " << _array[i].nickName << std::endl;
		std::cout << "Phone number: " << _array[i].phoneNumber << std::endl;
		std::cout << "Darkest secret: " << _array[i].darkestSecret << std::endl;
	}
}

std::string	PhoneBook::_contactString( const std::string& s ) const
{
	if (s.size() > 10)
		return (s.substr(0, 9) + '.');
	else
		return (s);
}

PhoneBook::PhoneBook( void )
{
	std::cout << std::setiosflags(std::ios::right);
	_size = 0;
	_nextAddIndex = 0;
}

PhoneBook::~PhoneBook( void )
{
	std::cout << std::resetiosflags(std::ios::right);
}

int	PhoneBook::getSize( void ) const
	{
		return (_size);
	}

void	PhoneBook::start( void )
{
	std::string	s;

	std::cout	<< "Welcome to PhoneBook!" << std::endl
				<< "Avaible commands list: ADD, SEARCH, EXIT" << std::endl
				<< "Type a command to continue" << std::endl;
	while (true)
	{
		std::cout << "PhoneBook: ";
		std::getline(std::cin ,s);
		if (s == "ADD")
			_add();
		else if (s == "SEARCH")
			_search();
		else if (s == "EXIT")
			break ;
		else
			std::cout << "Invalid command" << std::endl;
	}
}
