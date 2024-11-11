/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:55:02 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/11/11 15:15:44 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <deque>

void vectorTests()
{
	std::vector<int> vec;
	
	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);
	vec.push_back(10);

	std::cout << "The vector contents are: " << std::endl;
	for (size_t i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << " ";
    }
	std::cout << std::endl;

	try
	{
		int& found = easyfind(vec, 10);
		std::cout << "Value found: " << found << std::endl;
		std::cout << "Changing the found value to 2..." << std::endl;
		found = 2;
		std::cout << "Searching for another occurrence of the value 10: " << easyfind(vec, 10) << std::endl;
	}
	catch(std::runtime_error& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "Now, the vector contents are: " << std::endl;
	for (size_t i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << " ";
    }
	std::cout << std::endl;
}

void dequeTests()
{
	std::deque<int> deq;

	deq.push_back(10);
	deq.push_back(20);
	deq.push_back(30);
	deq.push_front(30);

	std::cout << "The deque contents are: " << std::endl;
	for (size_t i = 0; i < deq.size(); i++) {
        std::cout << deq[i] << " ";
    }
	std::cout << std::endl;

	try
	{
		int& found = easyfind(deq, 10);
		std::cout << "Value found: " << found << std::endl;
		std::cout << "Changing the found value to 2..." << std::endl;
		found = 2;
		std::cout << "Searching for another occurrence of the value 10: " << easyfind(deq, 10) << std::endl;
	}
	catch(std::runtime_error& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "Now, the deque contents are: " << std::endl;
	for (size_t i = 0; i < deq.size(); i++) {
        std::cout << deq[i] << " ";
    }
	std::cout << std::endl;
}

int main()
{
	vectorTests();
	std::cout << std::endl;
	dequeTests();
	
	return (0);
}