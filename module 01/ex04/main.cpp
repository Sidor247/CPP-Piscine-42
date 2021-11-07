/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 17:41:39 by cwhis             #+#    #+#             */
/*   Updated: 2021/09/30 15:10:22 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>


std::string	get_new_name(char *name)
{
	std::string	new_name(name);
	
	for ( int i = 0; name[i]; i++ )
		if (new_name[i] >= 'a' && new_name[i] <= 'z')
			new_name[i] += 'A' - 'a';
	return (new_name + ".replace");
}


int	write_to_file( char *name, std::string *file_string )
{
	std::string		new_name;
	std::ofstream	output;

	new_name = get_new_name(name);
	output.open(new_name);
	if ( !output.is_open() )
	{
		std::cout << "Error can't write to file " << new_name << std::endl;
		return (EXIT_FAILURE);
	}
	output << *file_string;
	output.close();
	return (EXIT_SUCCESS);
}

void	replace( std::string *file_string, std::string s1, std::string s2 )
{
	size_t	pos;	


	pos = file_string->find(s1);
	while ( pos != std::string::npos )
	{
		file_string->erase(pos, s1.size());
		file_string->insert(pos, s2);
		pos = file_string->find(s1, pos + s2.size());
	}
}

std::string	*get_file_string( char *name )
{
	std::ifstream	input(name);
	std::string		*file_string;
	
	if ( !input.is_open() )
		return (NULL);
	file_string = new std::string((std::istreambuf_iterator<char>(input)),
                        std::istreambuf_iterator<char>());
	input.close();
	return (file_string);
}

int	main( int argc, char **argv )
{
	std::string	*file_string;

	if ( argc != 4 )
	{
		std::cout << "Error: wrong number of arguments" << std::endl;
		return (1);
	}
	if ( !*argv[2] || !*argv[3] )
	{
		std::cout << "Error: empty string" << std::endl;
		return (1);
	}
	file_string = get_file_string(argv[1]);
	if ( !file_string )
	{
		std::cout << "Error: can't open file with name " << argv[1] << std::endl;
		return (1);
	}
	replace(file_string, argv[2], argv[3]);
	return (write_to_file(argv[1], file_string));
}
