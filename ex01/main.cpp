/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:45:31 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/11/13 10:28:44 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	{
		Span sp = Span(5);
		
		std::cout << "Filling the Span..." << std::endl;
		try
		{
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			sp.addNumber(100);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

		try
		{
			std::cout << "Shortest span is " << sp.shortestSpan() << std::endl;
			std::cout << "Longest span is " << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	
	std::cout << std::endl;

	{
		srand(time(0));
		std::vector<int> BigVec;
		for (size_t i = 0; i < 15000; ++i)
			BigVec.push_back(rand());
		
		std::cout << "Filling a big Span..." << std::endl;
		Span BigSpan(BigVec.size());
		try
		{
			BigSpan.insertRange(BigVec.begin(), BigVec.end());
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		
		try
		{
			std::cout << "Shortest span is " << BigSpan.shortestSpan() << std::endl;
			std::cout << "Longest span is " << BigSpan.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

		try
		{
			std::cout << "Trying to add one more number..." << std::endl;
			BigSpan.addNumber(6);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	
	return 0;
}