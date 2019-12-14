/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 19:51:29 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/13 20:19:27 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <exception>
#include <algorithm>
#include <set>

class Span
{
private:
	std::multiset<int, std::less<int> > _container;
	unsigned int _N;

public:
	class MaxCapacityReached : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

	Span(void);
	Span(unsigned int N);
	Span(const Span &src);
	~Span(void);

	Span &operator=(const Span &rhs);

	typedef std::multiset<int>::iterator iterator;

	iterator begin();
	iterator end();

	unsigned int size() const;
	unsigned int maxsize() const;

	template <class IterType>
	void addNumber(IterType Begin, IterType End);
	void addNumber(int);

	int shortestSpan();
	int longestSpan();
};

template <class IterType>
void Span::addNumber(IterType Begin, IterType End)
{

	int elemCount = std::distance(Begin, End);

	if (_container.size() + elemCount <= _N)
	{
		while (Begin != End)
			_container.insert(*Begin++);
	}
	else
	{
		throw Span::MaxCapacityReached();
	}
}

#endif
