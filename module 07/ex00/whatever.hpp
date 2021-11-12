/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 01:49:42 by cwhis             #+#    #+#             */
/*   Updated: 2021/11/11 02:00:53 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template<typename T>
void	swap(T &x, T &y)
{
	T tmp = x;
	x = y;
	y = tmp;
}

template<typename T>
T const &min(T const &x, T const &y)
{
	return (x < y ? x : y);
}

template<typename T>
T const &max(T const &x, T const &y)
{
	return (x > y ? x : y);
}

#endif