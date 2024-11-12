/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:57:19 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/11/12 20:35:19 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(int maxSize) : _maxSize(maxSize){}

Span::Span(const Span& src)
{
	_maxSize = src._maxSize;
	for(size_t i = 0; i < src._vec.size(); ++i)
		this->_vec[i] = src._vec[i]; 
}

Span& Span::operator=(const Span& src)
{
	if (&src != this)
	{
		_maxSize = src._maxSize;
		_vec.clear();
		for(size_t i = 0; i < src._vec.size(); ++i)
			_vec.push_back(src._vec[i]);
	}
	return (*this);
}

Span::~Span(){}

void Span::addNumber(int nbr)
{
	if (_vec.size() == _maxSize)
		throw MaxSizeException();
	_vec.push_back(nbr);
}

int Span::shortestSpan()
{
	if (_vec.size() < 2)
		throw NoNumbersEnoughException();
	std::vector<int> sortedVec = _vec;
	std::sort(sortedVec.begin(), sortedVec.end());
	int minDist = sortedVec[1] - sortedVec[0];
	for (size_t i = 1; i < sortedVec.size() - 1; ++i)
	{
		if ((sortedVec[i + 1] - sortedVec[i]) < minDist)
			minDist = sortedVec[i + 1] - sortedVec[i];
	}
	return (minDist);
}

int Span::longestSpan()
{
	if (_vec.size() < 2)
		throw NoNumbersEnoughException();
	std::vector<int> sortedVec = _vec;
	std::sort(sortedVec.begin(), sortedVec.end());
	return (sortedVec[sortedVec.size() - 1] - sortedVec[0]);
}

void Span::insertRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (_vec.size() + std::distance(begin, end) > _maxSize)
		throw MaxSizeException();
	_vec.insert(_vec.begin(), begin, end);
}

const char* Span::MaxSizeException::what() const throw()
{
	return ("Cannot add more numbers: maximum size reached.");
};

const char* Span::NoNumbersEnoughException::what() const throw()
{
	return ("Coudn't calculate distance with 0 or 1 number.");
};
