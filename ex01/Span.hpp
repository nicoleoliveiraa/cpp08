/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:28:44 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/11/11 15:29:55 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span {
private:
	std::vector<int> 
public:
	Span();
	Span(const Span& src);
	Span& operator=(const Span& src);
	~Span();
};

#endif // SPAN_HPP