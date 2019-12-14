/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 20:23:00 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/13 20:25:14 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T, std::deque<T> >
{

public:
	typedef typename std::deque<T>::iterator iterator;

#define container c

	iterator begin();
	iterator end();
};

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return (this->container.begin());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return (this->container.end());
}

#endif
