/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:40:12 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/11/13 15:55:18 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

#define RESET   "\033[0m"
#define BOLD_YELLOW  "\033[1m\033[33m"

int main()
{
	std::cout << BOLD_YELLOW << "----> MY TESTS <----" << RESET << std::endl;
	{
		MutantStack<int> myMutantStack;

		std::cout << "Constructing myMutantStack with 1, 2, 3, 4, 5." << std::endl;

		myMutantStack.push(1);
		myMutantStack.push(2);
		myMutantStack.push(3);
		myMutantStack.push(4);
		myMutantStack.push(5);

		std::cout << "Top of the stack is: " << myMutantStack.top() << std::endl;
		
		std::cout << "Using the iterator to print the stack:" << std::endl;
		for (MutantStack<int>::iterator it = myMutantStack.begin(); it != myMutantStack.end(); ++it) {
			std::cout << *it << std::endl;
		}
		
		std::cout << "Using the constant iterator to print the stack:" << std::endl;
		for (MutantStack<int>::const_iterator it = myMutantStack.begin(); it != myMutantStack.end(); ++it) {
			std::cout << *it << std::endl;
		}
		
		std::cout << "Pop and print stack again:" << std::endl;
		myMutantStack.pop();
		for (MutantStack<int>::iterator it = myMutantStack.begin(); it != myMutantStack.end(); ++it) {
			std::cout << *it << std::endl;
		}
	}
	
	std::cout << std::endl;
	std::cout << BOLD_YELLOW << "----> SUBJECT TESTS <----" << RESET << std::endl;
	
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		
		std::cout << mstack.top() << std::endl;

		mstack.pop();
		
		std::cout << mstack.size() << std::endl;
		
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
		std::cout << s.top() << std::endl;
	}
	
	std::cout << std::endl;
	std::cout << BOLD_YELLOW << "----> COMPARING WITH LIST <----" << RESET << std::endl;

	{
		std::list<int> mlist;
		mlist.push_back(5);		
		mlist.push_back(3);
		mlist.push_back(5);
		mlist.push_back(737);
		//[...]
		mlist.push_back(0);
		
		std::list<int>::iterator itl = mlist.begin();
		
		while (itl != mlist.end())
		{
			std::cout << *itl << std::endl;
			++itl;
		}
		// std::stack<int> s(mstack);
		// std::cout << s.top() << std::endl;

	}

	return (0);
}