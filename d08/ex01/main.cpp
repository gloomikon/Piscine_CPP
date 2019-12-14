/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 20:19:08 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/13 20:19:10 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "span.hpp"

int main()
{

	{
		Span sp = Span(5);

		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}

	std::cout << std::endl;

	{
		int max = 20;
		int mul = 5;
		int maxTimes = max * mul;

		Span sp = Span(max);
		std::vector<int> vec;

		for (int i = 0; i < maxTimes; i += mul)
			vec.push_back(i);

		sp.addNumber(vec.begin(), vec.end());

		for (Span::iterator first = sp.begin(); first != sp.end(); ++first)
			std::cout << *first << std::endl;

		std::cout << std::endl;
		
		std::cout << "shortestSpan : " << sp.shortestSpan() << std::endl;
		std::cout << "longestSpan  : " << sp.longestSpan() << std::endl;

		std::cout << std::endl;


		try
		{
			sp.addNumber(1);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}

		std::cout << std::endl;

	}

	return (0);
}
