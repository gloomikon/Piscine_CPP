/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 19:51:16 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/13 20:19:33 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(void) : _N(0)
{
}

Span::Span(unsigned int N) : _N(N)
{
}

Span::Span(const Span &src)
{
	*this = src;
}

Span::~Span(void) {}

Span &Span::operator=(const Span &rhs)
{

	if (this != &rhs)
	{
		_N = rhs._N;
		_container = rhs._container;
	}
	return (*this);
}

Span::iterator Span::begin()
{
	return (_container.begin());
}

Span::iterator Span::end()
{
	return (_container.end());
}

unsigned int Span::size() const
{
	return (_container.size());
}

unsigned int Span::maxsize() const
{
	return (_N);
}

void Span::addNumber(int n)
{

	(_container.size() < _N) ? _container.insert(n) : throw Span::MaxCapacityReached();
}

int Span::shortestSpan()
{
	if (_container.size() < 2)
		return (0);

	return (*(++_container.begin()) - *_container.begin());
}

int Span::longestSpan()
{
	return (*(--_container.end()) - *_container.begin());
}

const char *Span::MaxCapacityReached::what() const throw()
{
	return ("ERROR: MAX CAPACITY!");
}
