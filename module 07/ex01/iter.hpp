/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 02:16:59 by cwhis             #+#    #+#             */
/*   Updated: 2021/11/12 22:58:07 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

template<typename T>
void	iter(T arr[], int size, void f(T &))
{
	for (int i = 0; i < size; ++i)
		f(arr[i]);
}

template<typename T>
void	iter(T const arr[], int size, void f(T const &))
{
	for (int i = 0; i < size; ++i)
		f(arr[i]);
}

#endif