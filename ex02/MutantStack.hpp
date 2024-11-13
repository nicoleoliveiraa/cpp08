/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <nsouza-o@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:41:01 by nsouza-o          #+#    #+#             */
/*   Updated: 2024/11/13 15:53:24 by nsouza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
        MutantStack(){}
        MutantStack(const MutantStack& src) { *this = src;}
        MutantStack<T>& operator=(const MutantStack<T>& src)
        {
        	if (this != &src)
        	{
        		this->c = src.c;
        	}
        	return (*this);
        }
        ~MutantStack(){}
    
        typedef typename std::stack<T>::container_type inside_ctr;
		typedef typename inside_ctr::iterator iterator; 
		typedef typename inside_ctr::const_iterator const_iterator;
	
	    iterator begin() {
            return this->c.begin();
        }
    
        iterator end() {
            return this->c.end();
        }
    
        const_iterator begin() const {
            return this->c.begin();
        }
    
        const_iterator end() const {
            return this->c.end();
        }
};

#endif // MUTANTSTACK_HPP