/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 22:28:04 by cwhis             #+#    #+#             */
/*   Updated: 2021/09/25 15:14:00 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

void	print_uppercase(char *s)
{
	size_t 	size = strlen(s) - 1;
	size_t	i = 0;

	while (s[i] == ' ')
		i++;
	while (s[size] == ' ')
		size--;
	for (; i <= size; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			std::cout << (char)(s[i] + 'A' - 'a');
		else
			std::cout << (char)s[i];
	}
}

int		main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (EXIT_SUCCESS);
	}
	argc++;
	argv++;
	for (int i = 0; argv[i]; i++)
	{
		print_uppercase(argv[i]);
		if (argv[i + 1])
			std::cout << " ";
		else
			std::cout << std::endl;
	}
	return (EXIT_SUCCESS);
}