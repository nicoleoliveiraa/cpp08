/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:08:29 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/11/13 15:18:56 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template <typename T>
int& easyfind(T& cont, int search)
{
	typename T::iterator easyFind;
	
	easyFind = std::find(cont.begin(), cont.end(), search);
	if (easyFind == cont.end())
		throw std::runtime_error("Not found!");
	else 
		return (*easyFind);
}

#endif