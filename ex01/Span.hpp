/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:28:44 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/11/12 20:35:06 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span {
private:
	std::vector<int> _vec;
	size_t _maxSize;
	Span();
public:
	Span(int maxSize);
	Span(const Span& src);
	Span& operator=(const Span& src);
	~Span();

	void addNumber(int nbr);
	int shortestSpan();
	int longestSpan();

	void insertRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);

	class MaxSizeException : public std::exception {
	public:
		const char* what() const throw();
	};

	class NoNumbersEnoughException : public std::exception {
	public:
		const char* what() const throw();
	};
};

#endif // SPAN_HPP